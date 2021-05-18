class Solution {
public:
    string replaceDigits(string s) {
        for (int i = 1; i < s.size(); i+=2) // odd indices
            s[i] += s[i - 1] - '0';
        return s;
    }
};