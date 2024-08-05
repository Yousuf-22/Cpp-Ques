#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
    vector<int> evenOddBit(int n) {
        string bi = "";
        int even = 0;
        int odd = 0;
        vector<int> ans;
        while (n != 0) {
            if (n % 2 == 0)
                bi += '0';
            else
                bi += '1';
            n = n / 2;
        }

        for (int i = bi.size() - 1; i >= 0; i--) {
            if (bi[i] == '1') {
                if (i % 2 == 0) {
                    even++;
                } else {
                    odd++;
                }
            }
        }
        ans.push_back(even);
        ans.push_back(odd);
        return ans;
    }
int main() {
    int n;
    cin >> n;
    vector<int> ans = evenOddBit(n);
    for(int x : ans) {
        cout << x << " ";
    }
    return 0;
}