#include <bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     // int fun(int i, int j, vector<vector<int>>& grid,vector<vector<int>>& dp){
//     //     if(i==0 && j == 0){
//     //         return grid[0][0];
//     //     }
//     //     if(i<0 || j<0)return 1e9;

//     //     if(dp[i][j] != -1)return dp[i][j];

//     //     int left = grid[i][j] + fun(i,j-1,grid,dp);
//     //     int top = grid[i][j] + fun(i-1,j,grid,dp);
//     //     return dp[i][j] = min(left,top);

//     // }

//     // int minPathSum(vector<vector<int>>& grid) {
        
//     //     int n = grid.size();
//     //     int m = grid[0].size();
//     //     vector<vector<int>> dp(n,vector<int> (m,-1));
//     //     return fun(n-1,m-1,grid,dp);
//     // }

    int minPathSum(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> dp(n,vector<int> (m,0));
        for(int i=0; i< n; i++){
            for(int j=0; j<m; j++){
                if(i==0 && j== 0){
                    dp[i][j] = grid[i][j];
                }
                else{
                    int right = 1e9;
                    if(j>0){
                         right = grid[i][j] + dp[i][j-1];
                    }
                    
                    int bottom = 1e9;
                    if(i>0){
                         bottom = grid[i][j] + dp[i-1][j];
                    }
                    
                    dp[i][j] = min(right,bottom);
                }
            }
        }
        return dp[n-1][m-1];
    }

int main(){
    ios_base::sync_with_stdio;
    // [[1,3,1],[1,5,1],[4,2,1]]
    int rows;
    cin >> rows;
    int cols;
    cin >> cols;

    vector<vector<int>> path(rows,vector<int> (cols,0));
    for(int i=0; i<rows; i++){
        vector<int> currentRow;
        for(int j=0; j<cols; j++){
            int elem ;
            cin >> elem;
            currentRow.push_back(elem);
        }
        path.push_back(currentRow);
    }

    cout << minPathSum( path) ;


    return 0;

}