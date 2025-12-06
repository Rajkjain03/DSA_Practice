#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n); 

    for(int i=0; i<n; i++){
        cin >> arr[i] ;
    }

    long long count = 0;

    for(int i=1; i <n; i++){
        while(arr[i] < arr[i-1]){
            count++;
            arr[i]++;
        }
    }
    
    cout << count ;
    
    return 0;
}