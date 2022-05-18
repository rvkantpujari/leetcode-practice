class Solution {
public:
    int search(vector<int>& nums, int target) {
        int beg=0, mid, end= nums.size()-1;
        while(beg<=end)
        {
            mid = beg + (end - beg) / 2;
            
            if(target == nums[mid])
                return mid;
            else if(target < nums[mid])
                end = mid - 1;
            else if(target > nums[mid])
                beg = mid + 1;
        }
        return -1;
    }
};