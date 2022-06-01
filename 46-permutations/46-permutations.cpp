class Solution {
public:
    void helper(vector<int> nums, int i, vector<vector<int>> &ans)
    {
        if(i == nums.size())
            ans.push_back(nums);
        else
        {
            for(int j=i; j<nums.size(); j++)
            {
                swap(nums[i], nums[j]);
                helper(nums, i+1, ans);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> ans;
        helper(nums, 0, ans);
        return ans;
    }
};