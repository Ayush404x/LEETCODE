class Solution {
public:

    // Binary search inside one row
    bool searchinrow(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();

        int st = 0;
        int end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (target == mat[row][mid]) {
                return true;
            }
            else if (target > mat[row][mid]) {
                st = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {

        int m = mat.size();
        int n = mat[0].size();

        int startrow = 0;
        int endrow = m - 1;

        // Binary search among rows
        while (startrow <= endrow) {

            int midrow = startrow + (endrow - startrow) / 2;

            // Target can be inside this row
            if (target >= mat[midrow][0] &&
                target <= mat[midrow][n - 1]) {

                return searchinrow(mat, target, midrow);
            }

            // Target is in a lower row
            else if (target > mat[midrow][n - 1]) {
                startrow = midrow + 1;
            }

            // Target is in an upper row
            else {
                endrow = midrow - 1;
            }
        }

        return false;
    }
};