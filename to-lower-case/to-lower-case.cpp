class Solution {
public:
    string toLowerCase(string str) {
        for(int i=0; i<str.size(); i++)
        {
            if(str[i] >= 65 && str[i]<=90 ) // if uppercase character
                str[i] = str[i] + 32; // Add 32 since lowercase ASCII starts from 97
        }
        return str;
    }
};