#include<bits/stdc++.h>
using namespace std;

// int peekfindlinear(vector<int> &arr){
//     int res = 0;
        // if(arr[0] > arr[1])return arr[0];
        // if(arr[n-1] > arr[n-2])return arr[n-1];
//     for(int i=1; i<arr.size(); i++){
//         if(arr[i] > arr[i+1] && arr[i] > arr[i-1]){
//             return arr[i];
//         }
//     }
//     return -1;
// }


int peekfindBinary(vector<int> &arr){
    int n = arr.size();
    int res = 0;
    
    if (n == 1) 
        return 0;
        
    // Check if the first element is a peak
    if (arr[0] > arr[1])
        return 0;
        
    // Check if the last element is a peak
    if (arr[n - 1] > arr[n - 2])
        return n - 1;

    int low = 1, hi = n-2;
    while(low <= hi){
        int mid = low + (hi - low)/2;
        if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
            return arr[mid];
        }
        if(arr[mid] > arr[mid-1]){
            low = mid+1;
        }
        else{
            hi = mid - 1;
        }
    }
    
    return -1;
}


int main(){
    int n ;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        int t;
        cin >> t;
        arr[i] = t;
    }

    cout <<peekfindBinary(arr) << endl;
}