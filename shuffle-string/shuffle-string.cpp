class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string s_dup = s;
        for (auto index : indices)
            s_dup[indices[index]] = s[index];
        return s_dup;
    }
};