class Solution {
public:
    int reverse(int x) {
        bool isPos = true;
        long rev = 0, num = x;
        if(num<0)
        {
            num *= -1;
            isPos = false;
        } 
        while(num>0)
        {
            rev = rev*10 + num%10;
            num /= 10;
        }
        if(!isPos)
        {
            rev *= -1;
            if(rev<INT_MIN)
                return 0;
            else
                return rev;
        }
        else 
        {
            if(rev>INT_MAX)
                return 0;
            else
                return rev;
        }
        return rev;
    }
};