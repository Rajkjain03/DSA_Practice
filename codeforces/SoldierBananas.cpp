    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        int k , n , w ; 
        cin >> k >> n >> w;
        int tcost = 0 ;
        for(int i= 1; i <= w; i++){
            tcost += k*i;
        }

        if(tcost > n){
            cout << tcost - n ;
        }else{
            cout << 0 ;
        }
        

        return 0;
    }