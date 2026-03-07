#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        sort(arr.begin() , arr.end());
        
        int cont = 1 , maxi = 1 ;

        for(int i= 1; i <n ; i++){
            if((arr[i] - arr[i-1] > k)){
                cont = 1;
            }
            else{
                cont++;
            }

            maxi = max(cont , maxi);
        }

        cout << n - maxi << endl;
    }
    return 0;
}
