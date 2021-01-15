struct node
{
    int ind,val;
};
bool compare(node &x,node &y)
{
    return x.val<y.val;
}
int n;
void build(int seg[],int arr[],int tl=0,int tr=n-1,int v=1)
{
    if(tl==tr) seg[v] = arr[tl];
    else
    {
        int tm = (tl+tr)/2;
        build(seg,arr,tl,tm,v*2);
        build(seg,arr,tm+1,tr,v*2+1);
        seg[v] = seg[v*2] + seg[v*2+1];
    }
}
int fetch(int seg[],int l,int r,int tl=0,int tr=n-1,int v=1)
{
    if(l>r) return 0;
    if(l==tl and r==tr) return seg[v];
    else
    {
        int tm = (tl+tr)/2;
        return fetch(seg,l,min(r,tm),tl,tm,v*2) + fetch(seg,max(l,tm+1),r,tm+1,tr,v*2+1);
    }
}
void update(int seg[],int i,int val,int tl=0,int tr=n-1,int v=1)
{
    if(i==tl and i==tr) seg[v] = val;
    else
    {
        int tm = (tl+tr)/2;
        if(i<=tm)    update(seg,i,val,tl,tm,v*2);
        else    update(seg,i,val,tm+1,tr,v*2+1);
        seg[v] = seg[v*2] + seg[v*2+1];
    }
}
vector<int> solve(vector<int>& nums) {
    n = nums.size();
    if(n==0) return {};
    node arr[n];
    for(int i=0;i<n;i++)
        arr[i] = {i,nums[i]};
    sort(arr,arr+n,compare);
    int index[n];
    memset(index,0,sizeof(index));
    int seg[4*n];
    build(seg,index);
    vector<int> ans;
    for(int i=0;i<n;i++)
    {
        int j = arr[i].ind;
        ans.push_back(j+fetch(seg,0,j));
        update(seg,j,-1);
    }
    return ans;
}