#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s ; 
    cin >> s;

    for(int i=0; i<s.length(); i++){
        int dig = s[i] - '0';
        int inv = 9 - dig;

        if(inv < dig){
            if(i == 0 && inv == 0){
                continue;
            }else{
                s[i] = inv + '0' ;
            }
        }
    }
    cout << s;
    return 0 ; 
}