#include <bits/stdc++.h> 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n ; cin >> n ; 
        int ncount = 0 , pcount =0 ; 

        vector<int> arr(n);

        for(int i =0 ; i< n ; i++){
            cin >> arr[i];
            if(arr[i] == -1){
                ncount++;
            }
            else if(arr[i] == 1){
                pcount++;
            }
        }

       
        int ans = 0;

        while(pcount < ncount || ncount % 2 == 1){
            
                pcount++;
                ncount--;
                ans++;
            
        }

        cout << ans << endl;

    }

    return 0;
}   