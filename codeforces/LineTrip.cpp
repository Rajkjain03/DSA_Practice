    #include <bits/stdc++.h>
    using namespace std;

    

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);
        
        int t ; cin >> t;
        while(t--){
            int n , x ; cin >> n >> x;
            vector<int> arr(n+1);
            arr[0] = 0 ;
            for(int i= 1 ; i<= n ; i++){
                cin >> arr[i] ; 
            }

            int mini = -1;
            
            for(int i= 1; i<= n ; i++){
                mini = max(mini, arr[i] - arr[i-1]);
            }

            mini = max(mini, 2 * (x - arr[n]));
            
            cout << mini << "\n";
        }

    }