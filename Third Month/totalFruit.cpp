#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int totalFruit(vector<int>& fruits) {
    unordered_map<int,int> mpp;

    int i = 0;
    int j = 0;

    int ans = 0;
    if(fruits.size() == 1) {
        return 1;
    }
    if(fruits.size() == 2) {
        return 2;
    }
    while(j < fruits.size()) {
        mpp[fruits[j]]++;

        if(mpp.size() == 2) {
            ans = max(ans,(j-i+1));
        }

        while(mpp.size() > 2) {
            mpp[fruits[i]]--;
            if(mpp[fruits[i]] == 0) {
                mpp.erase(fruits[i]);
            }
            i++;
        }
        j++;
    }
    return ans;
}
int main() {
    vector<int> arr = {0};
    cout << totalFruit(arr);
    return 0;
}