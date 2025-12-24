#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin >> n;
    vector<int> arr(n);
    
    for(int i= 0 ; i<n ; i++){
        cin >> arr[i] ; 
    }

    int i = 0 , j = 1;
    int maxcount = 1;
    int count = 1 ;

    while( j < n && i < n){
        if(arr[i] < arr[j]){
            count++;
            j++;
            i++;
        }else{
            count = 1;
            i = j ;
            j++;
        }
        maxcount = max(maxcount , count);
    }

    cout << maxcount ;
    return 0 ; 
}