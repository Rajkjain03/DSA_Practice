                                
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring> 


using namespace std;

//first approach
int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        
        for(int i=0; i<s.length(); i++){
            int arr[256] = {0};
            int len =0;
            for(int j=i; j<s.length(); j++){
                if(arr[s[j]] == 1 ){
                    break;
                }
                arr[s[j]]++;
                len= j-i+1;
            }
            maxLen = max(len,maxLen);
        }
        return maxLen;

}

//optimized approach
int lengthOfLongestSubstring(string s){
    int n = s.length();
    int l = 0,r = 0;
    int maxLen = 0;
    int arr[256] = {-1};

    while(r<n){
        int len = 0;
        if(arr[s[r]] != -1){
            if(arr[s[r]] >= l){
                l = arr[s[r]]+1;
            }
        }
        len = r-l+1;
        maxLen = max(maxLen,len);
        arr[s[r]] = r;
    }

}

int main(){
    string s = "abcabcbb";
    cout << "Input String: "<< s << endl;
    cout << "Length of the longest substring without repeating characters: " << lengthOfLongestSubstring(s) << endl;
    return 0;
}