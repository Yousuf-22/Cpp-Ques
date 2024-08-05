#include<iostream>
#include<vector>
using namespace std;
int maxProfit(vector<int>& prices) {
    int minn = INT16_MAX;
    int ind = 0;
    for(int i = 0; i<prices.size(); i++) {
        if(minn > prices[i] and prices[i] != 0) {
            minn = prices[i];
            ind = i;
        }
    }
    if(ind == prices.size()-1) return false;
    int maxx = INT16_MIN;
    int ans = 0;
    for(int i = ind + 1; i<prices.size(); i++) {
        ans = prices[i] - minn;
        maxx = max(maxx,ans);
    }
    return maxx;
}
int main() {
    vector<int> arr = {5,0,2,7,9,3,1,2,4,5,8};
    cout << maxProfit(arr);
    return 0;
}