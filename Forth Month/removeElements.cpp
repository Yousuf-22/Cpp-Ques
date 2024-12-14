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

Node* removeElements(Node* head, int val) {
    if(head == NULL) return NULL;
    if(head->next == nullptr and head->data == val) return NULL;
     
    Node* temp = head;
    Node* newHeaad = new Node(0);
    Node* prev = newHeaad;
    if(head->data != val) newHeaad->next = head; 

    while(temp != nullptr) {
        if(temp->data == val) {
            prev->next = temp->next;
            temp = temp->next;
        }
        else {
            prev = temp;
            temp = temp->next;
        }
    }
    return newHeaad->next;
}

int main() {
    vector<int> arr = {1,7,7,7,7};
    Node* head = head1(arr);

    traversalS(removeElements(head,7));
    return 0;
}