#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> s;

    s.push(5);
    cout << s.size() << endl;
    s.push(6);
    s.push(8);
    cout << s.size() << endl;
    s.pop();
    cout << s.size() << endl;

    return 0;
}