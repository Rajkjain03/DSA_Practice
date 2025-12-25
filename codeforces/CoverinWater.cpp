#include <bits/stdc++.h> 
using namespace std;

bool checkthreeconsdot(string s){
    int n = s.size();
    if(s.length() <=2)return false;

    for(int i=2; i < n ;i++){
        if(s[i] == '.' && s[i] == s[i-1] && s[i] == s[i-2]){
            return true;
        }
    }

    return false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t; 

    while(t--){
        int n ; cin >> n ;
        string s; cin >> s;

        int ans = 0 ;
        int count = 0 ;
        for(int i= 0 ; i < n ; i++){
            if(s[i] ==  '.'){
                count++;
            }
        }

        if(checkthreeconsdot(s)){
            ans = 2;
        }else{
            ans = count; 
        }

        cout << ans << "\n" ;
    }

    return 0 ; 
}