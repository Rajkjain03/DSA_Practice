#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long n ;
    cin >> n;
    vector<int> num(n);

    for(int i=0 ; i<n-1; i++){
        cin >> num[i];
    }
    
    vector<int> arr(n+1,  -1);

    for(int i=0 ; i<n; i++){
        arr[num[i]]++;    
    }

    for(int i=1 ;i <= n ; i++){
        if(arr[i] == -1){
            cout << i;
        }
    }
    
    return 0;
}