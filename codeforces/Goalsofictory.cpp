    #include <bits/stdc++.h> 
    using namespace std;

    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t; cin >> t;
        while(t--){
            int n ; cin >> n ;
            vector<int> arr(n-1);
            int res = 0 ;
            for(int i=0; i<n-1; i++){
                cin >> arr[i] ;
                res += arr[i];
            }
            
            
            cout << res*(-1) << "\n";
        
        }

        return 0;
    }   