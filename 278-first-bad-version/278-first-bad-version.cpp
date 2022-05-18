// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) 
    {
        int beg = 0, mid, end = n-1, res;
        while(beg<=end)
        {
            mid = beg + (end - beg) / 2;
            if(isBadVersion(mid)) 
            {
                res = mid;
                end = mid - 1;
            }
            else
                beg = mid + 1;
        }
        return res;
    }
};