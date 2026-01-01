    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t; 
        cin >> t;
        while (t--)
        {
            int n ; cin >> n ;
            vector<int> arr(n);
            for(int i=0 ; i<n ; i++){
                cin >> arr[i];
            }

            int res =  -1;

            for(int i=1 ; i<n ; i++){
                if(arr[i] < arr[i-1]){
                    res =  0;
                    cout << 0  << "\n";
                    break;
                }
            }

            if(res == 0)continue;

            int mini = INT_MAX;
            for(int i =1 ; i< n ;i++){
                if(mini > arr[i] - arr[i-1]){
                    mini = arr[i] - arr[i-1];
                }
            }   

            res = 0 ;

            if (mini < 0) {
                cout << 0 << "\n";
            } else {
                cout << (mini / 2) + 1 << "\n";
            }

        }
        return 0;
    }
