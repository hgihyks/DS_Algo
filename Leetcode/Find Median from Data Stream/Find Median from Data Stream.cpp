class MedianFinder {
public:
    /** initialize your data structure here. */
    priority_queue<double> maxq;
    priority_queue<double,vector<double>,greater<double>> minq;
    MedianFinder() {
            }
        void addNum(int num) {
        maxq.push(num);
        if(maxq.size()-minq.size()>1)
        {
            int x = maxq.top();
            maxq.pop();
            minq.push(x);
        }
        else if(!minq.empty() and maxq.top() > minq.top())
        {
            int x = maxq.top();
            maxq.pop();
            minq.push(x);
            if(minq.size() > maxq.size())
            {
                int x = minq.top();
                minq.pop();
                maxq.push(x);
            }
        }
    }
        double findMedian() {
        if(maxq.size() == minq.size()) return (maxq.top()+minq.top())/2;
        else return maxq.top();
    }
};
/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */