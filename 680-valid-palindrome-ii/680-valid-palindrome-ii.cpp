class Solution {
public:
    bool validPalindrome(string s) 
    {    
        int beg = 0, end = s.size()-1, cnt = 0, cnt1 = 0;
        
        while(beg < end)
        {
            if(s[beg] == s[end]) // if all chars are matching
            {
                beg++;
                end--;
            }
            else 
            {
                cnt++; // count the mismatch chars
                beg++;
            }
        }

        beg = 0;
        end = s.size()-1;

        while(beg < end)
        {
            if(s[beg] == s[end]) // if all chars are matching
            {
                beg++;
                end--;
            }
            else 
            {
                cnt1++; // count the mismatch chars
                end--;
            }
        }

        if ((cnt == 0 || cnt1 == 0) || (cnt == 1 || cnt1 == 1))
            return true;
        
        return false;
    }
};