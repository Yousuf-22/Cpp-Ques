#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

// Aditya Approach
int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mpp;

        int i = 0;
        int j = 0;
        int ans = INT16_MIN;

        while (j < s.size()) {
            // Storing in Map
            mpp[s[j]]++;
            
            // Calculation
            if (mpp.size() == j - i + 1) {
                ans = max(ans, j - i + 1);
            }

            
            while ((j - i + 1) > mpp.size()) {
                mpp[s[i]]--;
                if (mpp[s[i]] == 0) {
                    mpp.erase(s[i]);
                }
                i++;
            }
            j++;
        }

    return ans;
}

// My Own Approach
// int lengthOfLongestSubstring(string s) {

//     unordered_map<char,int> mpp;

//     int i = 0;
//     int j = 0;
//     int ans = INT16_MIN;      
//     int cnt = 0;

//     while(j < s.size()) {
//         mpp[s[j]]++;
//         cnt++;

//         if(mpp.size() == cnt) {
//             ans = max(ans,j-i+1);
//         }

//         while(cnt > mpp.size()) {
//             mpp[s[i]]--;
//             cnt--;
//             if(mpp[s[i]] == 0) {
//                 mpp.erase(s[i]);
//             }
//             i++;
//         }
//         j++;
//     }

//     return ans;
// }
int main() {
    string s = "aaabcdd";
    cout << lengthOfLongestSubstring(s);
    return 0;
}