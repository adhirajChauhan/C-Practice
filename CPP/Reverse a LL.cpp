#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

Node* GetNode(int x){
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> next = NULL;
    return newNode;
}

void Insert(int x){
    Node* newNode = GetNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    newNode -> next = head;
    head = newNode;
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout << endl;
}

Node* Reverse(Node* head){
    Node* current;
    Node* next;
    Node* prev;
    current = head;
    prev = NULL;
    while(current != NULL){
        next = current -> next;
        current -> next = prev;
        prev = current;
        current -> next;
    }
    head = prev;
    //return head;
}

int main(){
    Node* head = NULL;
    Insert(20);
    Insert(30);
    Insert(40);
    Insert(50);
    Print();
    cout << "b";
    Reverse(head);
    Print();
}
