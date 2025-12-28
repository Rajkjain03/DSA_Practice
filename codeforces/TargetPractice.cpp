    #include <bits/stdc++.h> 
    using namespace std;

    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t; cin >> t;
        while(t--){
           int res = 0 ;
           for(int i =1 ; i<= 10 ; i++){
                for(int j = 1 ; j<= 10 ; j++){
                    char c; cin >> c;
                    if(c == '.')continue;
                    int a = i > 5 ? 11 - i : i ;
                    int b = j > 5 ? 11 - j : j ;
                    res += min(a,b);
                }
           }
           cout << res << "\n";
        }

        return 0;
    }   