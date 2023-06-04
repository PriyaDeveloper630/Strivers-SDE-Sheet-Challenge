#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        vector<pair<int,int>>indices;
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(matrix[i][j]==0){
                    indices.push_back({i,j});
                }
            }
        }
          
        for(int i=0;i<indices.size();i++){
            for(int j=0;j<col;j++){
                 matrix[indices[i].first][j]=0;
            }
          
        }
         for(int i=0;i<indices.size();i++){
             for(int j=0;j<row;j++){
                 matrix[j][indices[i].second]=0;
             }
            
        }
    }
};
int main(){
    return 0;
}