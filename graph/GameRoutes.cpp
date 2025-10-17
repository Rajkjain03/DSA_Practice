#include<bits/stdc++.h>
using namespace std;

vector<int> adj[200001];

int main(){
    int n , m ;
    cin >> n >> m;

    for(int i=0; i<m ;i++){
        int a , b; 
        cin >> a >> b;
        adj[a].push_back(b);
    }

    vector<int> indegree(n+1,0);

    for(int i = 1; i <= n; i++){
        for(auto it : adj[i]){
            indegree[it]++; 
        }
    }

    queue<int> q;
    for(int i =1 ;i<= n ; i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }

    vector<int> res;

    while(!q.empty()){
        int node = q.front();
        q.pop();
        res.push_back(node);

        for(auto it : adj[node]){
            indegree[it]--;
            if(indegree[it] == 0 ){
                q.push(it);
            }
        }
    }

    const int mod = 1e9 + 7;
    vector<int> dp(n+1, 0);
    dp[1] = 1 ;

    for(int u : res){
        for(int v : adj[u]){
            dp[v] = (dp[v] + dp[u]) % mod;
        }
    }

    cout << dp[n] << "\n"; 

    return 0;
}