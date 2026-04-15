class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> current;
        backtrack(nums, target, current, 0);
        return result;
    }
private:
    void backtrack(vector<int>& nums, int target, vector<int>& current, int i){
        if (target == 0){
            result.push_back(current);
            return;
        }
        if (target < 0 || i >= nums.size()){
            return;
        }
        current.push_back(nums[i]);
        backtrack(nums, target - nums[i], current, i);
        current.pop_back();
        backtrack(nums, target, current, i + 1);

    }
};
