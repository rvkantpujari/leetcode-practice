class Solution {
public:
    string toLowerCase(string s) {
        string lwrStr = "";
        for(auto ch : s)
        {
            if((int)ch >=65  && (int)ch <=90)
                lwrStr += (char)((int)ch + 32);
            else
                lwrStr += ch;
        }
        return lwrStr;
    }
};