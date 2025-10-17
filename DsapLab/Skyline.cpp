#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> getSkyline(vector<vector<int>>& buildings){
    vector<pair<int,int>> h;
    for(auto a : buildings){
        h.push_back({a[0], -a[2]});
        h.push_back({a[1], a[2]});
    }

    sort(h.begin(), h.end());

    int curr = 0, prev = 0;
    multiset<int> m;
    vector<vector<int>> res;

    m.insert(0);

    for(auto i: h){
        if(i.second < 0){
            m.insert(-i.second);
        }else{
            m.erase(m.find(i.second));
        }
        curr = *m.rbegin();
        if(curr != prev){
            res.push_back({i.first,curr});
            prev = curr;
        }
    }
    return res;
}


int main(){

    std::cout << "Enter the number of buildings: ";
    int n;
    cin >> n;

    vector<vector<int>> buildings;

    for (int i = 0; i < n; ++i) {
        vector<int> currentRow;
        for (int j = 0; j < 3; ++j) {
            int element;
            cin >> element;
            currentRow.push_back(element);
        }
        
        buildings.push_back(currentRow);
    }

    vector<vector<int>> res;
    res = getSkyline(buildings);

    for (auto i: res) {
        for (auto j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
  	cout << endl;
    return 0;
}