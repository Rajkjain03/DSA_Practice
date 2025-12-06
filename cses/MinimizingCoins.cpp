#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n, x;
    cin >> n >> x;

    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }

    vector<int> dp(x + 1, INF);

    dp[0] = 0;

    for (int i = 0; i < n; i++) {
        
        for (int k = coins[i]; k <= x; k++) {
            
            // Check if we can form a solution by taking this coin
            // (i.e., if dp[k - coins[i]] is not "infinity")
            if (dp[k - coins[i]] != INF) {
                
                // dp[k] (current value) is the "notTake" option
                // 1 + dp[k - coins[i]] is the "take" option
                dp[k] = min(dp[k], 1 + dp[k - coins[i]]);
            }
        }
    }

    // The final answer is in dp[x]
    if (dp[x] == INF) {
        cout << -1 << "\n";
    } else {
        cout << dp[x] << "\n";
    }

    return 0;
}