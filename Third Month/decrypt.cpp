#include<iostream>
#include<vector>
#include<list>
using namespace std;
vector<int> decrypt(vector<int>& code, int k) {

   vector<int> ans;

    int n = code.size();

    if(k > 0) {
        int l = 1;
        int r = 1;
        int cnt = 1;    
        int sum = 0;

        while(n--) {

        while (cnt <= k) {
            sum += code[r];

            if(cnt == k) {
                ans.push_back(sum);
            }
            if(r == code.size()-1) {
                r = 0;
            }
            else r++;
            cnt++;
        }   

        if(cnt > k) {
            sum -= code[l];
            l++;
            cnt--;
        }
    }

    }

    if(k < 0) { 
        int l = n-2;
        int r = n-2;
        int cnt = 1;    
        int sum = 0;

        while(n--) {

        while (cnt <= (k*-1)) {
            sum += code[l];

            if(cnt == (k*-1)) {
                ans.push_back(sum);
            }
            if(l == 0) {
                l = n-1;
            }
            else l--;
            cnt++;
        }   
        if(cnt > (k*-1)) {
            sum -= code[r];
            if(r == 0) {
                r = n-1;
            }
            else r--;
            cnt--;
        }
        
    }
    }

    for(int i = 0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
}
int main() {
    vector<int> arr = {2,4,9,3};
    decrypt(arr,-3);

    return 0;   
}