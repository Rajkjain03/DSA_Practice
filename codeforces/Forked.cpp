    #include <bits/stdc++.h> 
    using namespace std;



    int main(){

        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        
        int t ; cin >> t;

        int dx[4] = {-1,1,-1,1};
        int dy[4] = {-1,-1,1,1};

        while(t--){
            int a , b ; cin >> a >> b;
            int xk , yk ; cin >> xk >> yk;
            int xq , yq ; cin >> xq >> yq;

            set<pair<int,int>> kh , qh;
            for(int i = 0; i < 4 ; i++){
                kh.insert({xk + dx[i] * a , yk + dy[i] * b});
                kh.insert({xk + dx[i] * b , yk + dy[i] * a});

                qh.insert({xq + dx[i] * a , yq + dy[i] * b});
                qh.insert({xq + dx[i] * b , yq + dy[i] * a});
            }

            int res = 0 ;
            for(auto p : kh){
                if(qh.find(p) != qh.end()){
                    res++;
                }
            }
            
            cout << res << endl;

        }
        return 0;
    }   