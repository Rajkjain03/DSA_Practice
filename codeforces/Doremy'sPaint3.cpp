#include <bits/stdc++.h> 
using namespace std;

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--){
        int n ; cin >> n ; 
        map<int,int> m;
        for(int i= 0; i< n ;i++){
            int x;
            cin >> x;
            m[x]++;
        }

        bool res = true;
        if((int)m.size() <=2){
            for (auto& i : m) {
                res &= (i.second >= n / 2);
            }
        }else{
            res = false;
        }

        if(res){
            cout << "Yes\n";
        }else{
            cout << "NO\n";
        }
    }

    return 0;
}   