class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 1)
            return true;
        else if(n%2 != 0)
            return false;
        
        for(int i = 0; i <= n/2; i++)
        {
            long num = pow(2, i);
            if(num == n)
                return true;
            if(num > n)
                break;
        }
        return false;
    }
};