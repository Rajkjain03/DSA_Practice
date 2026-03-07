
    #include <bits/stdc++.h> 
    using namespace std;

    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t; cin >> t;
        while(t--){
            int n , k ; 
            cin >> n >> k ; 
            string s ; cin >> s;
            vector<int> arr(26, 0);
            for(int i =0 ; i< s.size() ; i++){
                arr[s[i] - 'a']++;
            }

            int count = 0 ; 
            for(int i = 0 ; i< 26 ; i++){
                if(arr[i] % 2 == 1){
                    count++;
                }
            }

            if(count > k+1){
                cout << "NO \n";
            }
            else{
                cout << "YES \n";
            }
        }

        return 0;
    }   