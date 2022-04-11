class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int r = grid.size();
        int c = grid[0].size();
        
        vector<vector<int>> newGrid(r, vector<int>(c,0));
        
        for(int i = 0; i < r; i++)
        {
            for(int j = 0; j < c; j++)
            {
                int col = (j + k) % c;
                int row = (i + (j + k) / c) % r;
                
                newGrid[row][col] = grid[i][j];
            }
        }
        return newGrid;
    }
};