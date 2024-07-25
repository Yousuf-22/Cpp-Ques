#include<iostream>
using namespace std;
int main() {
    int x;
    cin >> x;
    // checking it is odd .... x = 6;  x binary = 110, 110 & 1 == 000       x is even
    if(x & 1) { 
        cout << " Num is odd " << endl;
    }
    // divide by two ..

    // right shift for divide
    // left shift for multi
    x = x >> 1;
    cout << x;
    return 0;
}