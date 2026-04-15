class KthLargest {
private:
priority_queue<int, vector<int>, greater<int>> minPQ;
int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (int num : nums){
            minPQ.push(num);
            if (minPQ.size() > k){
                minPQ.pop();
            }
        }
    }
    
    int add(int val) {
        minPQ.push(val);
        if (minPQ.size() > k){
            minPQ.pop();
        }
        return minPQ.top();
    }
};
