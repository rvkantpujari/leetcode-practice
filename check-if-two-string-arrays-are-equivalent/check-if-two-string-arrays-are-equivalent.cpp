class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string s1, s2;
        // concatenate all elements of vectors word1 & word2
        for (auto word : word1)
            s1 += word; 
        for (auto word : word2)
            s2 += word; 
        return s1 == s2; // compare and return whether both are equal or not
    }
};