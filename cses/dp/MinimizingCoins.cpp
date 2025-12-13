#include <bits/stdc++.h> 
using namespace std;

int fun(int ind , vector<int> &coins, int target , vector<vector<int>> &dp){
    
    if(target == 0)return 0;

    if(ind == 0){
        if(target % coins[0] == 0)return target / coins[0];
        else{
            return 1e9;
        }
    }

    if(dp[ind][target] != -1)return dp[ind][target];

    int nottake = 0 + fun(ind - 1 , coins , target, dp);
    int take = 1e9;
    if( target - coins[ind] >= 0){
        int res =  fun(ind, coins , target - coins[ind] , dp);
        if(res != 1e9){
            take = 1 + res;
        }
    }

    return dp[ind][target] = min(take , nottake);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , x; 
    cin >> n >> x;

    vector<int> coins(n);
    for(int i= 0; i<n; i++){
        cin >> coins[i];
    }

    vector<vector<int>> dp(n , vector<int> (x+1, 0));
    


    // //1 dp -> most optimized 
    // vector<int> dp(x+1, 1e9);
    // dp[0] = 0;

    // //dp[i] -> min coins required to make sum i 
    // for(int i =0 ; i< n ; i++){
    //     for(int target = coins[i] ; target <= x ; target++){
    //         dp[target] = min(dp[target] , 1 + dp[target - coins[i]]);
    //     }
    // }   

    // if( dp[x] == 1e9){
    //     cout << -1;
    // }
    // else{
    //     cout << dp[x];
    // }
    
    return 0 ; 
}