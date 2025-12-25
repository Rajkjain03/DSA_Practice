#include <bits/stdc++.h> 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n ; cin >> n ;

        bool res = false;

        if((n-1) % 3 == 0 || (n + 1) % 3 == 0){
            res = true;
        }

        if(res){
            cout << "First" << "\n" ;
        }else{
            cout << "Second" << "\n" ; 
        }

    }

    return 0;
}