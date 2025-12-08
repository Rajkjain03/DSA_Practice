#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin >> n;
    vector<int> arr(n);
    int min = INT_MAX , max = INT_MIN ;
    int a , b = 0;
    for(int i=0 ;i < n; i++){
        cin >> arr[i];  
        if(min >= arr[i]){
            min = arr[i];
            a = i;
        }
        if(max < arr[i]){
            max = arr[i];
            b = i;
        }
    }
    int t = a < b ? 1 : 0 ;
    cout <<  b + (n - a - 1) - t ;

    return 0 ; 
}