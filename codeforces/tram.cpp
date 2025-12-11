#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n ; cin >> n; 
    int maxi = 0; 
    int ad = 0;
    for(int i=0 ; i<n ; i++){
        int curr = 0 ;
        int a , b ; 
        cin >> a >> b ;
        curr = b - a ;
        ad += curr;
        maxi = max(maxi , ad);
    }

    cout << maxi ;

    return 0;
}