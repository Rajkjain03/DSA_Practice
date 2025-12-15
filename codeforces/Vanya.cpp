    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        int n ; cin >> n ; 

        if(n == 1){
            cout << n ; 
            return 0 ; 
        }

        int count = 0 ;

        int i = 1; 
        while ( i <= n ){
            i = i + (i*(i + 1))/2;
            count++;
        }

        cout << count ; 

        return 0;
    }