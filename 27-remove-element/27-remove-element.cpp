class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int N = nums.size();
        int cnt = 0;
        for(int i = 0; i < N; i++)
            if(nums[i] != val)
                nums[cnt++] = nums[i];
        return cnt;
    }
};