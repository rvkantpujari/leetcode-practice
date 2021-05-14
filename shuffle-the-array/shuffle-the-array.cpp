class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        int x = 0, y = nums.size() / 2;
        for (x = 0; x < nums.size() / 2; x++)
        {
            ans.push_back(nums[x]);
            ans.push_back(nums[y+x]);
        }
        return ans;
    }
};