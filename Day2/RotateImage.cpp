class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>> ans(n, vector<int>(n, 0)); 
        
        // int col=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                ans[j][n-i-1]=matrix[i][j];
            }
        }
        // for (int i=0;i<row;i++){
        //     for (int j=i;j<col;j++){
        //         swap(matrix[i][j],matrix[j][i]);
        //     }
        // }
        //  for (int i=0;i<row;i++){
        //     for (int j=0;j<col/2;j++){
        //         swap(matrix[i][j],matrix[i][row-j-1]);
        //     }
        // }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                matrix[i][j]=ans[i][j];
            }
        }

    }
};