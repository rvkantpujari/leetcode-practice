class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;
        for(auto customer : accounts)
        {
            int balSum = 0; // initialize balSum to 0 for every customer
            for(auto amount : customer) // calc sum of available balance
                balSum += amount;
            maxWealth = max(maxWealth, balSum); // find maximum wealth
        }
        return maxWealth;
    }
};