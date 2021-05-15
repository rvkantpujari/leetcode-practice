class Solution {
public:
    int mySqrt(int x) {
        if (x == 0 || x == 1) // Square of 0 and 1: 0*0 = 0 and 1*1 = 1
            return x;
        long i = 1;
        while (i*i <= x)
            i++;
        return --i;
    }
};