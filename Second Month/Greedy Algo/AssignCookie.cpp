#include<iostream>
#include<vector>
using namespace std;
int findContentChildren(vector<int>& c, vector<int>& s) {
    int i = 0;
    int j = 0;
    int cnt = 0;
    while(i < c.size() and j < s.size()) {
        if(c[i] <= s[j]) {
            cnt++;
            i++;
            j++;
        }
        else if(c[i] > s[j]) {
            j++;
        }
    }
    cout << cnt;
}
int main() {
    vector<int> child = {1,2};
    vector<int> cookie = {1,2,3};
    findContentChildren(child,cookie);
    return 0;
}