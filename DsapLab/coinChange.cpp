#include<bits/stdc++.h>
using namespace std;
int coinChange(vector<int>& coins, int amount){
    // dp[i] = minimum coins to make amount i
    vector<int> dp(amount + 1, amount + 1);
    // base case
    dp[0]= 0;
    //  filling the dp array                
    for(int i = 1; i<= amount ;i++){
        // try every coin
        for(int coin : coins){
            //  if we can use this coin 
            if( i - coin >= 0){
                //  we have choice to take or not take
                dp[i] = min(dp[i] , 1 + dp[i - coin]);
            }
        }
    }
    return dp[amount] > amount ? -1 : dp[amount];
}

int main() {
    int n ;
    cin >> n ;
    vector<int> coins(n);
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int amount;
     cin >> amount;
    cout << coinChange(coins, amount) << endl; 
    return 0;
}       