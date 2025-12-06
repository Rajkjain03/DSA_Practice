#include <bits/stdc++.h>

using namespace std;

int main(){

    ios::sync_with_stdio(0);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<int> arr(n); 

    set<int> s;

    for(int i = 0; i<n; i++){
        int t ;
        cin >> t;
        s.insert(t);
    }

    cout << s.size() << "\n";
    
    return 0;
}