#include <bits/stdc++.h> 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n , k ; cin >> n >> k ;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i] ;
        }
        
        bool res = false;

        for(int i=0 ; i<n; i++){
            if(arr[i] == k){
                res = true;
            }
        }
        
        if(res){
            cout <<"YES\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}   