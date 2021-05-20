class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
        for(auto c: s)
            cout<<c;
    }
};