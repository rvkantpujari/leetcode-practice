class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> Nums;
        for(auto n : nums)
            Nums.push_back(n*n);
        sort(Nums.begin(), Nums.end());
        return Nums;
    }
};