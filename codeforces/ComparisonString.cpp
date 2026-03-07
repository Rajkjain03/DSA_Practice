#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n ; cin >> n;
        string s ; cin >> s;

        int cnt = 1; 
        int maxi = 1 ; 

        for(int i = 1 ; i < s.size() ; i++){
            if(s[i] == s[i-1]){
                cnt++;
            }
            else{
                maxi = max(cnt , maxi);
                cnt = 1;
            }

             maxi = max(cnt , maxi);
        }

        cout << maxi + 1 << endl;
    }
    return 0;
}
