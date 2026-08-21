class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int top = 0;
        int bottom = matrix.size() - 1;
        int left = 0;
        int right = matrix[0].size() - 1;

        while (top <= bottom && left <= right) {

            // yeh left to right top mein travel krta hai
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;


            // yeh top to bottom right side ki boundary traverse krta hai
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;


            // yeh right to left bottom mein visit krta hai
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }


            // yeh bottom to top left side ki boundary ke paas travel krta hai
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};