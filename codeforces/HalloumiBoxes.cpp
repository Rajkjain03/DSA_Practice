        #include <bits/stdc++.h>
        using namespace std;

        bool fun(vector<int> &arr, int n , int k){
            if(k == 1){
                for(int i = 1; i< n ;i++){
                    if(arr[i] < arr[i-1]){
                        return false;
                    }
                }
                return true;
            }

            if(k > 1){
                return true;
            }

            return false;
        }
        

        int main()
        {
            ios::sync_with_stdio(0);
            cin.tie(NULL);
            
            int t ; cin >> t ; 
            
            while(t--){
                int n , k ;
                cin >> n >>  k ;
                // n-> no . of boxes
                // k-> the length of the maximum reverse

                vector<int> arr(n);
                for(int i= 0 ; i< n; i++){
                    cin >> arr[i] ;
                }

                if(fun(arr , n , k)){
                    cout << "YES" << "\n";
                }else{
                    cout << "NO" << "\n";
                }
            }

            return 0;
        }