#include <bits/stdc++.h> 
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int max = 0 ; 
    int min = 0 ;
    int a , b , c;
    cin >> a >> b >> c;

    if(a > b){
        if(a > c){
            max = a;
        }
        else{
            max = c;
        }
    }
    else{
        if(b>c){
            max = b;
        }else{
            max = c;
        }
    }

    if(a < b){
        if(a < c){
            min = a;
        }
        else{
            min = c;
        }
    }
    else{
        if(b<c){
            min = b;
        }else{
            min = c;
        }
    }

    cout << max - min;
    
    
    return 0 ; 
}