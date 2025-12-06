#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    string s ;
    cin >> s;

    int maxCount = INT_MIN;
    int count = 1;

    if(s.length() == 1){
        cout << 1 ;
        return 0;
    }   

    char ch = s[0];
    for(int i= 1 ; i<s.length(); i++){
        if(ch == s[i]){
            count++;
        }else{
            count = 1;
            ch = s[i];
        }

        maxCount = max(maxCount,count);
    }

    cout << maxCount ;
    
    return 0;
}