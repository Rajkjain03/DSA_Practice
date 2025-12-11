#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string n ; cin >> n;
    int count =0 ;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i] == '4' || n[i] == '7'){
            count++;
        }
    }

    if(count == 7 || count == 4){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    

    return 0 ; 
}