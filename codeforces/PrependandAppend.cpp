#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int t ; cin >> t; 
    while(t--){
        int n ; cin >> n; 
        string s ; cin >> s;

        int ans = 0 ;
        int l = 0 , r = n-1;

        while(l <= r){
            if(s[l] == '0'){
                if(s[r] == '1'){
                    l++;
                    r--;
                }else{
                    cout << r- l +1 << endl;
                    ans = 1;
                    break;
                }
            }else{
                if(s[r] == '0'){
                    l++;
                    r--;
                }else{
                    cout << r- l +1 << endl;
                    ans = 1 ;
                    break;
                }
            }
        }
        
        if(ans == 0){
            cout << 0 << endl;
        }
    }

    return 0;
}