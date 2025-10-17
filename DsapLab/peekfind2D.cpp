#include<bits/stdc++.h>
using namespace std;


int findMax(vector<vector<int>>& mat, int n, int m, int mid){
        int max =-1;
        int ind = -1;
        for(int i=0; i<n; i++){
            if(mat[i][mid] > max){
                max = mat[i][mid];
                ind = i;
            }
        }
        return ind;
    }

    
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int s = 0, e = m-1;
        while(s<=e){
            int mid = (s + e)/2;
            int max = findMax(mat,n,m,mid);
            int left = mid - 1 >= 0 ? mat[max][mid-1] : -1;
            int right = mid + 1 < m ? mat[max][mid+1] : -1;
            if(mat[max][mid] > left && mat[max][mid] > right){
                return {max,mid};
            }else if(mat[max][mid] < left){
                e = mid -1;
            }else{
                s = mid +1;
            }
        }

        return {-1,-1};
    }


vector<int> findPeek(vector<vector<int>> &ans){
    int n = ans.size();
    int m = ans[0].size();
    
    vector<int> res(2);
    int s = 0, e = m-1;
    while(s <= e){
        int mid = (s+e)/2;
        int max = findMax(ans,n,m,mid);

        int left = mid -1 >= 0 ? ans[max][mid - 1] : -1;
        int right = mid + 1 < n ? ans[max][mid + 1] : -1;
        if(ans[max][mid] > left && ans[max][mid] > right){
            return {max,mid};
        }else if(ans[max][mid] > left){
            s = mid + 1;
        }else{
            s = mid - 1;
        }
    }
    return {-1,-1};
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << "Enter the no. of rows of 2d array" << endl;
    int n ; 
    cin >> n;

      cout << "Enter the no. of cols of 2d array" << endl;
    int m ; 
    cin >> m;


    vector<vector<int>> ans;
    for(int i=0; i<n; i++){
        vector<int> temp;
        for(int j=0; j <m; j++){
            int x ; 
            cin >> x;
            temp.push_back(x);
        }
        ans.push_back(temp);
    }

    vector<int> res;
    res = findPeakGrid(ans);
    for(auto i : res){
        cout << i << " " ;
    }
    return 0;
}