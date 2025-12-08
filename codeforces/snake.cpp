#include <bits/stdc++.h> 
using namespace std;



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n , m ; cin >> n >> m ; 
    bool turn = false;
    for(int i=0 ;i <n; i++){
        for(int j= 0; j< m ; j++){
            if(i % 2 != 0){
                //draw snake
                if(!turn && j == (m-1)){
                    cout << "#";
                }else if(turn && j == 0){
                    cout << "#";
                }else{
                    cout << "." ;
                } 
            }else{
                cout << "#" ;
            }
        }
        if(i %2 != 0){
            turn = !turn;
        }
        cout << "\n";
    }
    
    return 0 ; 
}