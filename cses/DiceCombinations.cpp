#include <bits/stdc++.h>
using namespace std;

const long long mod = 1000000007LL;

long long countNum(int n,vector<long long> &dp){

    if(n == 0) return 1;
    if(n < 0 ) return 0;

    if(dp[n] != -1) return dp[n];
    long long ans = 0;
    for(int i=1; i<=6; i++){
        ans = (ans + countNum(n-i,dp)) % mod;
    }
    return dp[n] = ans;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n ; 
    cin >> n;

    vector<long long> dp(n+1,-1);
    cout << countNum(n,dp);


    return 0 ;
}