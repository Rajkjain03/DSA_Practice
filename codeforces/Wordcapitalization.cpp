    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        string s ;
        cin >> s;

        if(s[0] >= 'A' && s[0] <= 'Z'){
            cout << s;
        }else{
            s[0] = s[0] - 97 + 65;
            cout << s;
        }

        return 0;
    }