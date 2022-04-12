class Solution {
public:
    int countNeighbor(const vector<vector<int>>& board, int r, int c) 
    {
        int cnt = 0;
        bool up, down, left, right;
        
        up = r > 0;
        down = r < board.size() - 1;
        left = c > 0;
        right = c < board[0].size() - 1;
        
        if (up) 
        {
            cnt += board[r - 1][c] & 1;
            if (left)
                cnt += board[r - 1][c - 1] & 1;
            if (right)
                cnt += board[r - 1][c + 1] & 1;
        }
        
        if (down)
        {
            cnt += board[r + 1][c] & 1;
            if (left)
                cnt += board[r + 1][c - 1] & 1;
            if (right)
                cnt += board[r + 1][c + 1] & 1;
        }
        
        if (left) 
            cnt += board[r][c - 1] & 1;
        
        if (right)
            cnt += board[r][c + 1] & 1;
        
        return cnt;
    }
    
    void gameOfLife(vector<vector<int>>& board) 
    {
        for (int i = 0; i < board.size(); i += 1) 
        {
            for (int j = 0; j < board[0].size(); j += 1) 
            {
                int live_neighbors = countNeighbor(board, i, j);
                
                if (board[i][j] == 1 && (live_neighbors == 2 || live_neighbors == 3)) 
                {
                    board[i][j] += 2;
                } 
                else if (board[i][j] == 0 && live_neighbors == 3) 
                {
                    board[i][j] += 2;
                }
            }
        }
        for (int i = 0; i < board.size(); i += 1) 
        {
            for (int j = 0; j < board[0].size(); j += 1) 
            {
                if (board[i][j] & 2)
                {
                    board[i][j] = 1;
                }
                else
                {
                    board[i][j] = 0;
                }
            }
        }
    }
};