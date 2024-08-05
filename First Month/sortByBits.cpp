#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;
vector<int> sortByBits(vector<int>& arr) {
    vector<pair<int,int>> v;

    for(int i = 0; i<arr.size(); i++) {
        int cnt = 0;
        int div = 0;
        div = arr[i];
        while(div > 0) {
            if(div % 2 == 1) cnt++;
            div = div / 2;
        }
        v.push_back({cnt, arr[i]});
    }
    sort(v.begin(), v.end());
    vector<int> ans;
    for(auto it : v) {
        ans.push_back(it.second);
    }
    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    vector <int> arr = {0,1,2,3,4,5,6,7,8};
    sortByBits(arr);
    return 0;
}