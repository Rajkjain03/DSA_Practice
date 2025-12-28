    #include <bits/stdc++.h> 
    using namespace std;

    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int n ; cin >> n;
        int ans = INT_MAX ;
        for(int i=0 ; i < n ; i++){
            int x ; cin >> x;
            if(x > 0){
                ans = min(ans, abs(x  - 0));
            }else{
                ans = min(ans, abs(0 - x));
            }
            
        }
        cout << ans;
        return 0;
    }   