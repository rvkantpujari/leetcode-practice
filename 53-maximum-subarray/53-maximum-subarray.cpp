class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cs=0, ms=nums[0], n=nums.size();
        for(int i=0; i<n; i++) 
        {
            if(cs < 0) cs = 0;
            cs += nums[i];
            if(cs > ms)
                ms = cs;
        }
        return ms;
    }
};