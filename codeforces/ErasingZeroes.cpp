        #include <bits/stdc++.h>
        using namespace std;

        int fun(int n ){
            return (n*(n+1)/2);
        }

        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(NULL);

            int t ; cin >> t ; 
            while(t--){
                string s; cin >> s; 
                int i = 0 , j = s.length()-1;
                while(i <= j && s[i] == '0'){
                    i++;
                }
                while(i <= j && s[j] == '0'){
                    j--;
                }
                
                int count = 0 ;
                for(int k = i ; k <= j ; k++){
                    if(s[k] == '0'){
                        count++;
                    }
                }

                cout << count <<"\n";
            }

            return 0;
        }