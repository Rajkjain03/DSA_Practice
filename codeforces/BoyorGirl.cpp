    #include <bits/stdc++.h>
    using namespace std;

    int main()
    {
        ios::sync_with_stdio(0);
        cin.tie(NULL);

        string s ; 
        cin >> s;
        
        int arr[26] = {0};

        for(int i =0 ; i<s.size() ; i++){
            arr[s[i] - 'a']++;
        }
        
        int count =  0; 
        for(int i= 0 ; i< 26 ; i++){
            if(arr[i] != 0)count++;
        }

        if(count % 2 != 0){
            cout << "IGNORE HIM!";
        }
        else{
            cout << "CHAT WITH HER!";
        }
        
        return 0;
    }