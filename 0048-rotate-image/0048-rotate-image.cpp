class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        for(int i = 0; i < n/2; i++){
            for(int j = i; j < n-1-i; j++){
                int a, b, c, d;
                a = matrix[i][j];
                b = matrix[j][n-i-1];
                c = matrix[n-i-1][n-1-j];
                d = matrix[n-1-j][i];
                matrix[j][n-i-1] = a;
                matrix[n-i-1][n-1-j] = b;
                matrix[n-1-j][i] = c;
                matrix[i][j] = d;
            }
        }
    }
};