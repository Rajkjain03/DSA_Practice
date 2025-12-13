#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(NULL);

    long long n , k  ;
    cin >> n >> k ; 

    while(k--){
                
        int temp = n % 10;
        if(temp == 0){
            n = n / 10 ;
        }else{
            n = n - 1;
        }
    }

    cout << n ;

    return 0;
}