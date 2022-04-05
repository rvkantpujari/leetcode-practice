class Solution {
public:
    int maxArea(vector<int>& height) {
        int beg = 0, end = height.size()-1, maxWater = 0;
        while(beg < end)
        {
            maxWater = max(maxWater, min(height[beg], height[end]) * (end-beg));
            if(height[beg] < height[end])
                beg++;
            else
                end--;
        }
        return maxWater;
    }
};