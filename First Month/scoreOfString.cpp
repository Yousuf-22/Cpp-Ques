#include<iostream>
using namespace std;
int main() {
    int sum;
    int score = 0;
    string s = {"zaz"};
    for(int i = 0; i<s.size()-1; i++) {
        sum = 0;
        int x = (int)s[i];
        int y = (int)s[i+1];
        sum = (x - y);
        if(sum < 0) {
            sum = sum * -1;
        }
        score = sum + score;
    }

    cout << score << endl;
    return 0;
}