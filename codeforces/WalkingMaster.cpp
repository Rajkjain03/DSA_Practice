#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t ; 
    while(t--){
        int a , b , c , d ; cin >> a >> b >> c >> d;

        int ans = 0 ; 
        if(b > d){
            cout << -1 << endl; 
            continue;
        }
        
        ans += (d - b);
        a += ans;

        if(a < c){
            cout << -1 << endl; 
            continue;
        }

        ans += (a - c);
        cout << ans << endl;
    }
    
    return 0 ; 
}