class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = (n > 0) ? matrix[0].size() : 0;

        // Use the first row and first column to mark which rows and columns should be zeroed
        bool zeroFirstRow = false;
        bool zeroFirstCol = false;

        // Check if the first row and first column need to be zeroed
        for (int j = 0; j < m; j++) {
            if (matrix[0][j] == 0) {
                zeroFirstRow = true;
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                zeroFirstCol = true;
                break;
            }
        }

        // Mark rows and columns using the first row and first column
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // Zero out rows and columns
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Zero out the first row and first column if needed
        if (zeroFirstRow) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        if (zeroFirstCol) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};
