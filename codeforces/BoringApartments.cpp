#include <bits/stdc++.h> 
using namespace std;

void fun(int n){
    int t = 0;
    for(int i= 1; i <= 9 ; i++){
        int s = 0 ;
        for(int j = 1 ; j<=4 ; j++){
            s = s*10 + i;
            t += j;
            if(s == n){
                cout << t << "\n";
                return ;
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[] = {1, 3,  6 , 10};
    int t;  cin >> t;
    while(t--){
        int x; cin >> x;
        fun(x);
    }

    return 0 ; 
}