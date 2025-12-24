    #include <bits/stdc++.h>
    using namespace std;

    int fun(int n ){
        return (n*(n+1)/2);
    }

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        int n ; cin >> n ; 
        int lvl = 0;

        while(true){
            n -= fun(lvl+1);
            if(n >= 0)lvl++;
            else break;
        }
         
        cout << lvl;

        return 0;
    }