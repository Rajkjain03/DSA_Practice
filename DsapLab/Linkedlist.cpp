#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = nullptr;
    }
};

void traverseList(Node *head){
    while(head != nullptr){
        cout << head->data << " " ;
        head = head -> next;
    }
}

int main () {

    Node *head = new Node(2);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(40);
    head -> next = temp1;
    temp1 -> next = temp2;
    temp2 -> next = nullptr;
    traverseList(head);

    return 0;
}   