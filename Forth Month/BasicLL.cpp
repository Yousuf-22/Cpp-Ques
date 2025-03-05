#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
class Node {
    public:
    int data;
    Node* next;

    Node() {};

    Node(int d) {
        data = d;
        next = nullptr;
    } 
};

Node* head1(vector<int>& arr) {
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i<arr.size(); i++) {
        Node* nNode = new Node(arr[i]);
        prev->next = nNode;
        prev = nNode;
    }

    return head;
}

void traversalS(Node* head) {
    while(head != nullptr) {
        cout << head->data << " ";

        head = head->next;
    }
}

int lengthh(Node* head) {
    int len = 0;
    while(head != nullptr) {
        len++;
        head = head->next;
    }

    return len;
}


int main() {
    vector<int> arr = {1,2,3,5,6,7,8,9,0};
    Node* head = head1(arr);

    return 0;
}