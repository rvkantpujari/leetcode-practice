class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int n = 0;
        for(auto i : index)
            target.insert(target.begin() + i, nums[n++]);
        return target;
    }
};