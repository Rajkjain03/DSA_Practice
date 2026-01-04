#include <bits/stdc++.h>
using namespace std;

//not complete

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t ; cin >> t; 
    while(t--){
        int n ; cin >> n ; 
        vector<int> arr(n);
        for(int i = 0 ; i< n ; i++){
            cin >> arr[i] ; 
        }

        int res = arr[0] ;
        for(int i= 1; i<n; i++){
            res = res ^ arr[i];
        }

        cout << (res ^ 0) << endl;
    }

    return 0;
}