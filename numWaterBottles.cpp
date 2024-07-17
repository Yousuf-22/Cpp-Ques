#include<iostream>
using namespace std;
int numWaterBottles(int numBottles, int numExchange) {
    int drink = numBottles;
    while(numBottles >= numExchange){
        numBottles = numBottles/numExchange;
        int rem = numBottles%numExchange;
        drink +=numBottles;
        numBottles +=rem;
        cout << drink << " ";
    }
    return drink;
}
int main() {
    cout << numWaterBottles(15,8);
    return 0;
}