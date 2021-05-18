class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        int sum = 0, revC = 0, mid = r / 2;
        while (r > 0) // starting from last row
            sum += mat[--r][--c] + mat[r][revC++]; // sum +=  leftDiag + rightDiag
        if (mat.size() % 2 != 0) // omit mid element, if ODD matrix
            sum -= mat[mid][mid];
        return sum;
    }
};