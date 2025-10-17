#include <bits/stdc++.h>
using namespace std;

vector<int> adj[200001];
bool vis[200001];
int dp[200001];
int nextNode[200001];

void dfs(int node , int n ){
    vis[node] = true;

    for(auto it : adj[node]){
        if(vis[it] == false){
            dfs(it,n);
        }

        if((dp[it] != -1) && (dp[it] + 1 > dp[node])){
            dp[node] = dp[it] + 1;
            nextNode[node] = it;
        }
    }
}

int main (){


    int n , m ;
    cin >> n >> m;

    for(int i =1 ; i<=n ;i++){
        dp[i] = -1;
    }

    dp[n] = 1;

    for(int i =0 ; i< m; i++){
        int a , b;
        cin >> a >>  b;

        adj[a].push_back(b);
    }

    dfs(1,n);

    if(dp[1] == -1){
        cout << "IMPOSSIBLE" << "\n";
    }else{
        cout << dp[1] << "\n" ;

        int node = 1;
        while(node){
            cout << node << " " ;
            node = nextNode[node];
        }
    }

    return 0;
}