#include<bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int> &wt,  vector<int> &val , int n ){
    
    vector<int> dp(W+1, 0);
    for(int i =0; i<n; i++){
        for(int w = W; w >= wt[i] ; w--){
            dp[w] = max(dp[w] , val[i] + dp[w - wt[i]]);
        }
    }

    return dp[W];
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,W;
    cin >> n >> W;  

    vector<int> wt(n), val(n);
    cout<<"Enter the weights of items: ";
    for(int i=0; i<n; i++){
        cin >> wt[i] ;
    }

    cout<<"Enter the value of items: ";
    for(int i=0; i<n; i++){
        cin >> val[i] ;
    }

    cout<<"Enter the maximum weight capacity of knapsack: ";
    cin >> W;
    int ans = knapsack(W, wt, val, n);;
    cout << "The maximum value that can be obtained is: " << ans << endl;

    return 0;
}