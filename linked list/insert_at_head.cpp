#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* head = NULL;

void insertHead(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

void display() {
    Node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {
    insertHead(30);
    insertHead(20);
    insertHead(10);

    display();

    return 0;
}