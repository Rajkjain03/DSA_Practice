    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        string tb;
        cin >> tb;

        bool res = false;

        for(int i = 0; i< 5 ; i++){
            string s ; 
            cin >> s; 
            
            if(s[0] == tb[0] || s[1] == tb[1]){
                res = true;
                break;
            }
        }

        if(res){
            cout << "YES" ;
        }else{
            cout << "NO" ;
        }

        return 0;
    }