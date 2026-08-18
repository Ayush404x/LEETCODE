class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        
        vector<int> ans;

        int m = matrix.size();
        int n = matrix[0].size();

        int minr = 0;
        int minc = 0;
        int maxr = m - 1;
        int maxc = n - 1;

        while (minr <= maxr && minc <= maxc)
        {
            // Right
            for (int j = minc; j <= maxc; j++)
            {
                ans.push_back(matrix[minr][j]);
            }
            minr++;

            // Down
            if (minr <= maxr)
            {
                for (int i = minr; i <= maxr; i++)
                {
                    ans.push_back(matrix[i][maxc]);
                }
            }
            maxc--;

            // Left
            if (minc <= maxc && minr <= maxr)
            {
                for (int j = maxc; j >= minc; j--)
                {
                    ans.push_back(matrix[maxr][j]);
                }
            }
            maxr--;

            // Up
            if (minr <= maxr && minc <= maxc)
            {
                for (int i = maxr; i >= minr; i--)
                {
                    ans.push_back(matrix[i][minc]);
                }
            }
            minc++;
        }

        return ans;
    }
};