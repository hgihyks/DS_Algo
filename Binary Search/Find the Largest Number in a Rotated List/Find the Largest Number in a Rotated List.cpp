int solve(vector<int>& arr) {
    int l = 0, r = arr.size() - 1;
    while (r - l > 1) {
        int m = (l + r) / 2;
        if (arr[l] < arr[m])
            l = m;
        else
            r = m;
    }
    return max(arr[l], arr[r]);
}