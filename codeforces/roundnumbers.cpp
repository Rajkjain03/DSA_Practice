#include <bits/stdc++.h> 
using namespace std;

// not done

void find(int n){
    int temp = n;
    vector<int> arr;
    


    
    cout << arr.size() << "\n";

    for(int i=0; i< arr.size() ; i++){
        cout << arr[i] << " ";
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t ; cin >> t;
    while(t--){
        int n ; cin >> n; 
        if(n <= 10){
            cout << 1 << "\n" << n;
        }
        else{
            find(n);    
        }
    }
    
    return 0 ; 
}