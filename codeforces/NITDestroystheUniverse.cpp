#include<bits/stdc++.h>
using namespace std;

int main(){

    ios:: sync_with_stdio(false);
    cin.tie(nullptr);

    int t ; cin >> t;
    while(t--){
        long long n ; cin >> n ; 
        vector<long long> arr(n);
        long long zerocount = 0 ;
        for(int i= 0 ; i< n ; i++){
            cin >> arr[i] ;
            if(arr[i] == 0)zerocount++;
        }
        
        if(zerocount == n){
            cout << 0 << endl;
            continue;
        }

        bool foundzero = false;

        int left = 0 , right = n-1;

        while(arr[left] == 0)left++;
        while(arr[right] == 0)right--;

        for(int i = left ; i<= right ;i++){
            if(arr[i] == 0)foundzero = true;
        }

        if(zerocount == n){
            cout << 0 << endl;
        }else if(foundzero == false){
            cout << 1 << endl;
        }else{
            cout << 2 << endl;
        }
    }

    return 0 ;
}