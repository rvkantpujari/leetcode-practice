class Solution {
public:
    bool isPalindrome(int x) {
        // false if x is -ve
        if(x<0)
            return false;
        unsigned int num = x, rem, rev = 0;
        while(num > 0)
        {
            rev = (rev * 10) + num % 10;
            num /= 10;
        }
        if(rev == x)
            return true;
        return false;
    }
};