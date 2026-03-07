#include<bits/stdc++.h>
using namespace std;

int main(){

    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t ; cin >> t;
    while(t--){
        long long n ; cin >> n ; 
        vector<long long> arr(n);
        for(int i= 0 ; i< n ; i++){
            cin >> arr[i] ;
        }

        if(n == 1){
            cout << 0 <<  "\n"; 
            continue;
        }

        long long ans = arr[n-1] - arr[0] ;

        for(int i = 1; i <n  ; i++){
            ans = max(ans , arr[i] - arr[0]);
        }

        for(int i = 0; i<n  - 1; i++){
            ans = max(ans , arr[n-1] - arr[i]);
        }

        for(int i= 0; i<n -1 ; i++){
            ans = max(ans, arr[i] - arr[i+1]);
        }
        
        cout << ans << endl;
    }

    return 0 ;
}