class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> smallerVals;
        for(auto curr : nums)
        {
            int count = 0;
            for(auto n : nums)
            {
                if(n < curr)
                    count++;
            }
            smallerVals.push_back(count);
        }
        return smallerVals;
    }
};