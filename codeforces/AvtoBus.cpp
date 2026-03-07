#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
       long long n ; cin >> n;
       // less then 4 or odd
        if(n < 4 || n % 2 != 0){
            cout << -1 << "\n";
            continue;
        }

       long long maxi = n / 4 ;

       long long mini = n / 6 ;

       if(n % 6 != 0){
        mini++;
       }

       cout << mini << " " << maxi << "\n";
    }
    return 0;
}
