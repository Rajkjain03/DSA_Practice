    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        int t; 
        cin >> t;
        while (t--)
        {
            int n , k , x ; cin >> n >> k >> x;

            if(x != 1){
                cout << "YES" << endl;
                cout << n << "\n";
                for(int i =0 ; i< n ; i++){
                    cout << 1 << " ";
                }
                cout <<"\n";
            }else{
                if(k == 1 || (k == 2 && n % 2 == 1)){
                    cout << "NO" << endl;
                }else{
                     cout << "YES" << endl;
                    if(n % 2 == 0){
                    cout << n / 2 << "\n" ; 
                    for(int i= 0 ; i<n/2; i++){
                        cout << 2 << " ";
                    }
                    cout << "\n";
                    }
                    else{
                        cout << 1 + (n-3) / 2 << "\n" ; 
                        cout << 3 << " ";
                        for(int i= 0 ; i< (n-3) / 2; i++){
                            cout << 2 << " ";
                        }
                        cout << "\n";
                    }
                }
                
            }

        }
        return 0;
    }

//     5
// 10 3 2
// 5 2 1
// 4 2 1
// 7 7 3
// 6 1 1

// n k x 
// x should not be taken
// 1 to k except x to form n
