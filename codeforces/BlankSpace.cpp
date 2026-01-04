#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t ; 
    while(t--){
        int n  ; cin >> n; 
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        int i = 0 , j = 0 ;
        int count = 0 ;
        for(int i= 0; i<n ; i++){
            if(arr[i] == 1)continue;
            int c = 0 ;
            for(int j= i; j<n; j++){
                if(arr[i] == arr[j] && arr[j] == 0){
                    c++;
                }
                else{
                    break;
                }
            }
            count = max(count, c);
        }

        cout << count << "\n";
    }

    
    return 0 ; 
}