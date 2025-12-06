#include<bits/stdc++.h>
using namespace std;

void dfs(int i, vector<int> &vis, vector<int> adj[]){
    vis[i] = 1;

    for(auto it : adj[i]){
        if(!vis[it]){
            dfs(it,vis,adj);
        }
    }

}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n , m ;
    cin >> n >> m;

    vector<int> adj[n+1];
    
    for(int i=0; i<m ; i++){
        int a, b;
        cin >> a >> b;

        adj[a].push_back(b);
        adj[b].push_back(a);

    }

    vector<int> bridges;
    vector<int> vis(n+1,0);
    int count = -1;
    for(int i=1; i<=n; i++){

        if(!vis[i]){
            bridges.push_back(i);
            dfs(i,vis,adj);
        }

    }

    cout << bridges.size() -1 << endl;
    for(int i=0; i< bridges.size() - 1; i++){
        cout << bridges[i] << " " << bridges[i+1] << "\n";
    }

    return 0 ;
}