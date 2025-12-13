#include<bits/stdc++.h>
using namespace std;

const long long mod = 1000000007;

// long long  fun(long long  n , vector<long long > &dp){

//     if(n == 0)return 1;
//     if(n < 0)return 0;

//     if(dp[n] != -1)return dp[n];

//     long long  ans = 0 ;

//     for(long long  i = 1 ; i<= 6 ; i++){
//         ans =( ans + fun(n - i , dp)) % mod;
//     }

//     return dp[n] = ans;
// }

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long  n ; 
    cin >> n;
    
    vector<long long > dp(n+1,0);
    // dp[i] - > no. of ways to construct sum i  

    dp[0] = 1;

    for(int i = 1 ; i<= n ; i++){
        long long ans = 0 ;
        for(int j = 1 ; j<= 6 ; j++){
            if(i >= j){
                dp[i] = (dp[i] + dp[i - j]) % mod;
            }
        }
    }
    
    cout << dp[n];

    return 0 ;
}