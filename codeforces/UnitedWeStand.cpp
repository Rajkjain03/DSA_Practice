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
        for(int i=0 ;i<n; i++)cin >> arr[i];

        int maxi = INT_MIN;
        for(int i=0 ; i< n ;i++){
            if(arr[i] > maxi )maxi = arr[i];
        }

        vector<int> a , b;

        for(int i= 0 ; i<n ;i ++){
            if(arr[i] != maxi)a.push_back(arr[i]);
            else b.push_back(arr[i]);
        }

        if(a.size() == 0){
            cout << -1 << "\n";
            
        }else{
            cout << a.size() << " " << b.size()  << "\n";
            for(int i=0; i< a.size(); i++){
                cout << a[i] <<" " ;
            }
            cout << endl;
            for(int i=0; i< b.size(); i++){
                cout << b[i] <<" " ;
            }
            cout << endl;
        }
    }
    return 0;
}
