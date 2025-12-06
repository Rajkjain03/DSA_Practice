#include<bits/stdc++.h>
using namespace std;

int drow[] = {-1,0,+1,0};
int dcol[] = {0,-1,0,+1};
char moves[] = {'U', 'L' , 'D' , 'R'};


int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n , m ;
    cin >> n >> m;
    vector<vector<char>> lab(n,vector<char> (m,0));

    int start_i= -1;
    int start_j = -1;
    int end_i = -1;
    int end_j = -1;

    for(int i=0; i<n; i++){
        for(int j= 0; j<m; j++){
            cin >> lab[i][j];
            if(lab[i][j] == 'A'){
                start_i = i;
                start_j = j;
            }else if(lab[i][j] == 'B'){
                end_i = i;
                end_j = j;
            }
        }

    }

    vector<vector<int>> vis(n,vector<int> (m,0));
    queue<pair<int,int >> q;
    vector<vector<char>> path(n, vector<char>(m, 0));

    q.push({start_i, start_j});
    vis[start_i][start_j] = 1;
    bool found = false;

    while(!q.empty()){
        pair<int, int> curr = q.front();
        q.pop();

        int in = curr.first;
        int jn = curr.second;

        if(in == end_i && jn == end_j){
            found = true;
            break; 
        }

        for(int i=0; i <4; i++){
            int nrow = in + drow[i];
            int ncol = jn + dcol[i];

            if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m){
                if(!vis[nrow][ncol] && (lab[nrow][ncol] == '.' || lab[nrow][ncol] == 'B')){
                    vis[nrow][ncol] = 1;        
                    path[nrow][ncol] = moves[i]; 
                    q.push({nrow, ncol});      
                }
            }
        }
    }

    if(found){
        cout << "YES" << "\n";

        vector<char> res;
        pair<int, int> curr = {end_i, end_j};

        while(curr.first != start_i || curr.second != start_j){
            char move = path[curr.first][curr.second];
            res.push_back(move);

            if(move == 'U') curr.first++; 
            else if(move == 'L') curr.second++; 
            else if(move == 'D') curr.first--; 
            else if(move == 'R') curr.second--; 
        }
            reverse(res.begin(), res.end());

            cout << res.size() << "\n";
            for(char c : res){
                cout << c;
            }
            cout << "\n";
        
    }else {
        cout << "NO" << "\n";
    }
  

    return 0 ;
}