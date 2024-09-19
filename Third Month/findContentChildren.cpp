#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findContentChildren(vector<int>& g, vector<int>& s) {

    sort(s.begin(),s.end());
    sort(g.begin(),g.end());

    int i = 0;
    int j = 0;

    int cnt = 0;

    while(i < g.size() && j < s.size()) {
        if(g[i] <= s[j]) {
            i++;
            j++;
            cnt++;
        }
        else if(g[i] > s[j]) {
            j++;
        }
    }
    return cnt;
}
int main() {
    vector<int> greed = {1,2};
    vector<int> cookie = {1,2,3};
    cout << findContentChildren(greed,cookie);
    return 0;
}