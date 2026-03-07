
    #include <bits/stdc++.h> 
    using namespace std;

    
    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t; cin >> t;
        while(t--){
            long long n , k , x ; cin >> n >> k >> x;
            
            //min sum possible with k distinct numbers will be first k elements 1, 2, .. ...k.
            long long mini =  (k * (k + 1)) / 2;
            //max sum possible with k distinct numbers will be last k elements  
            //sum of n - sum of (n-k) == sum of last k 
            long long maxi = (n * (n + 1)) / 2 - ((n - k) * (n - k + 1)) / 2;

            if(x>= mini && x <= maxi){
                cout <<"YES" << endl;
            }else{
                cout <<"NO \n";
            }
        }

        return 0;
    }   