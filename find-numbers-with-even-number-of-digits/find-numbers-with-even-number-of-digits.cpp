class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int countEven = 0;
        for (auto n : nums)
        {
            if (to_string(n).size() % 2 == 0)
                countEven++;
        }
        return countEven;
    }
};