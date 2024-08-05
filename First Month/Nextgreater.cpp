#include<iostream>
#include<vector>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, vector<int>& brr) {
        vector <int> ans;
        for(int i=0; i<arr.size(); i++) {
            for(int j=0; j<brr.size() -1 ; j++) {
                if(arr[i] == brr[j]) {
                    if(brr[j] < brr[j+1]){
                        ans.push_back(brr[j+1]);
                    }
                    if(arr[i] == brr[brr.size() -1]) {
                        ans.push_back(-1);
                    }
                    else{
                        ans.push_back(-1);
                    }
                }
            }
        }
        return ans;
    }
int main() {
    vector <int> arr = {4,1,2};
    vector <int> brr = {1,2,3,4};

    vector <int> ans = nextGreaterElement(arr,brr);

    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    return 0;
}