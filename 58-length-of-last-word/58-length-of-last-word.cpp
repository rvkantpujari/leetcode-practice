class Solution {
public:
    int lengthOfLastWord(string s) {
        int size = 0, flag = 0;
        for(int len = s.length()-1; len>=0; len--)
        {
            if(s[len] != ' ')
            {
                size++;
                flag = 1;
            }
            else if(s[len] == ' ' && flag == 1)
            {
                break;
            }
        }
        return size;
    }
};