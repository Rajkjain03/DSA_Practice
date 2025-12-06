#include <bits/stdc++.h>
using namespace std;

bool check(int start , int V, vector<int> adj[], vector<int> &col){
    queue<int> q;
    q.push(start);
    col[start] = 0;

    while(!q.empty()){
        int node = q.front();
        q.pop();

        for(auto it: adj[node]){
            if(col[it] == -1){
                col[it] = !col[node];
                q.push(it);
            }

            if(col[it] == col[node]){
                return false;
            }
            
        }
    }
    return true;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n , m ;
    cin >> n >> m;

    vector<int> adj[n+1];

    for(int i=0; i<m; i++){
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> col(n+1,-1);

    for(int i=1; i < n+1; i++){
        if(col[i] == -1){
            if(!check(i,n+1,adj,col)){
                cout << "IMPOSSIBLE" << endl;
                return 0;
            }
        }
    }
    
    for(int i= 1; i < n+1; i++){
        if(col[i] == 0){
            cout << "1" << " " ;
        }else{
            cout << "2" << " " ;
        }
    }
    cout << "\n";

    return 0;

}