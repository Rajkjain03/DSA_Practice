#include <bits/stdc++.h>
using namespace std;

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

    vector<int> parent(n + 1);
    vector<int> dis(n + 1, INT_MAX);

    queue<int> q;
    dis[1] = 0;
    q.push(1);

    while (!q.empty())
    {

        int node = q.front();
        q.pop();

        for (auto it : adj[node])
        {
            if (dis[it] == INT_MAX)
            {
                dis[it] = 1 + dis[node];
                parent[it] = node;
                q.push(it);
            }
        }
    }
    vector<int> res;
    if (dis[n] == INT_MAX)
    {
        cout << "IMPOSSIBLE" << "\n";
    }
    else
    {

        cout << dis[n] + 1 << "\n";
        int curr = n;
        while (curr != 1)
        {
            res.push_back(curr);
            curr = parent[curr];
        }
        res.push_back(1);
        reverse(begin(res), end(res));
        for (int t : res)
        {
            cout << t << " ";
        }
    }

    return 0;
}