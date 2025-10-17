#include<iostream>
#include<vector>

using namespace std;

void fun(int ind, vector<int> &ans, int arr[], int n){
    //base case 
    if(ind == n){
        for(auto it : ans){
            cout << it << " ";
        }
        cout << endl;
        return;
    }

    //take the particular index into the subsequence 
    ans.push_back(arr[ind]);
    fun(ind+1,ans,arr,n);
    ans.pop_back();

    //not take the particular index into the subsequence
    fun(ind+1,ans,arr,n);
}

int main(){
    ios_base::sync_with_stdio;
    cin.tie(NULL);
    cout.tie(NULL);

    int arr[] = {3,1,2};
    vector<int> ans;
    int n = sizeof(arr)/sizeof(arr[0]);
    // cout << n;
    fun(0, ans,arr, n);

    return 0;
}