#include<iostream>
#include<algorithm>
using namespace std;
int minBitFlips(int start, int goal) {
class Solution {
    public:
    int minBitFlips(int start, int goal) {
        int cnt = 0; 
        // XOR will give 1 where the bits are different
        int xorr = start ^ goal;

        while(xorr > 0){
            // If the last bit is 1, increment count 
            cnt += xorr & 1;
            // Right-shift to check the next bit
            xorr >>=1;
        }
        return cnt;
    }
};
}
int main() {
    minBitFlips(16,1);
    return 0;
}