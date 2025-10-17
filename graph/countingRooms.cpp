// Online C compiler to run C program online
#include <bits/stdc++.h>
using namespace std;

void dfs(int row,int col, vector<vector<char>> &buildings, vector<vector<int>> &vis){
    int n = buildings.size();
    int m = buildings[0].size();
    vis[row][col] = 1;
    
    int drow[] = {0,-1,0,+1};
    int dcol[] = {-1,0,+1,0};
    
    for(int i=0; i<4; i++){
        int nrow = row+drow[i];
        int ncol = col+dcol[i];
        
        if(nrow<n && nrow>=0 && ncol <m && ncol >=0 && !vis[nrow][ncol] && 
        buildings[nrow][ncol] == '.'){
            dfs(nrow,ncol,buildings,vis);
        }
    }
}

int main() {
    
    int n , m ;
    cin >> n >> m;
    
    vector<vector<char>> buildings(n,vector<char> (m,0));
    
    for(int i=0; i<n; i++){
        for(int j=0 ; j<m; j++){
            cin >> buildings[i][j];
        }
    }
    
    vector<vector<int>> vis(n,vector<int> (m,0));
    int count = 0;
    for(int i = 0 ; i< n; i++){
        for(int j= 0 ; j<m; j++){
            if(!vis[i][j] && buildings[i][j] == '.'){
                count++;
                dfs(i,j,buildings,vis);
            }       
        }
    }
    
    cout << count;
    return 0;
}