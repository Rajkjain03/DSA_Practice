#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int  n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int res = k*l / nl;
    res = min(res, min(p/np, c*d));

    cout << res / n;
    
    return 0 ; 
}