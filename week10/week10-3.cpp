// week10-3.cpp 學習計畫 Matrix 第3題(上週AI寫過, 本週再重寫一次)
// LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size(), N=matrix[0].size();
        int top=0, bottom=M-1, left=0, right=N-1;
        vector<int> ans;
        while (top <= bottom && left <= right){
            for (int j=left; j<=right; j++) ans.push_back(matrix[top][j]);
            top++;

            for (int i=top; i<=bottom; i++) ans.push_back(matrix[i][right]);
            right--;
            if(!(top<=bottom && left<=right)) break;

            for (int j=right; j>=left; j--) ans.push_back(matrix[bottom][j]);
            bottom--;

            for (int i=bottom; i>=top; i--) ans.push_back(matrix[i][left]);
            left++;
        }
        return ans;
    }
};
