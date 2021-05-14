class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> Nums;
        int sum = 0;
        for (auto n : nums)
            Nums.push_back(sum += n);
        return Nums;
    }
};