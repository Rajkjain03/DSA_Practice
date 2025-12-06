#include <bits/stdc++.h>
using namespace std;

int sv, ev;

bool dfs(int i , int p ,  vector<int> &parent, vector<int> &vis,vector<int> adj[])
{
    vis[i] = 1;
    parent[i] = p;

    for(auto it : adj[i]){
        if(it == p){
            continue;
        }
        if(vis[it]){
            sv = it;
            ev = i;
            return true;
        }

        if(!vis[it]){
            if(dfs(it,i,parent,vis,adj))return true;
        }
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<int> adj[n + 1];

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    vector<int> parent(n + 1, -1);
    vector<int> vis(n + 1, 0);

    bool res = false;
    for (int i = 1; i < n + 1; i++)
    {

        if (!vis[i])
        {
            if (dfs(i, -1, parent, vis, adj))
            {
                res = true;
                break;
            }
        }
    }

    if (res == false)
    {
        cout << "IMPOSSIBLE" << "\n";
        return 0;
    }

    vector<int> ans;
    int t = ev;
    ans.push_back(t);

    while(t != sv){
        ans.push_back(parent[t]);
        t = parent[t];
    }

    ans.push_back(ev);

    cout << ans.size() << "\n";

    for(auto it : ans){
        cout << it << " " ;
    }

    cout << "\n";

    return 0;
}