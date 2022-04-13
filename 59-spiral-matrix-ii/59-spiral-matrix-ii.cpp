class Solution {
public:
    vector<vector<int>> generateMatrix(int n) 
    {
        vector<vector<int>> v(n, vector<int> (n, 0));
        int k = 1, top = 0, bottom = n - 1, left = 0, right = n - 1;
        
        while(left <= right && top <= bottom)
        {
            if(top <= bottom)
            {
                for(int i = left; i <= right; i++)
                {
                    v[top][i] = k;
                    k++;
                }
                top++;
            }
            
            if(left <= right)
            {
                for(int i = top; i <= bottom; i++)
                {
                    v[i][right] = k;   
                    k++;
                }
                right--;
            }
            
            if(top <= bottom)
            {
                for(int i = right; i >= left; i--)
                {
                    v[bottom][i] = k;
                    k++;
                }
                bottom--;
            }
            
            if(left <= right)
            {
                for(int i = bottom; i >= top; i--)
                {
                    v[i][left] = k;
                    k++;
                }                
                left++;
            }
        }
        return v;
    }
};