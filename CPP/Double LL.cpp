#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head;

//GetNewNode function will be responsible for creating new nodes
Node* GetNewNode (int x){
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    return newNode;

}

//Creating function for Inserting nodes
void Insert (int x){
    Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }

    head -> prev = newNode;
    newNode -> next = head;
    head = newNode;

}

//Creating function to print
void Print(){
    Node* temp = head;
    cout << "The List is :" << endl;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp  = temp -> next;

    }
    cout << endl;

}
int main() {
    head = NULL;
    Insert(5); Print();
    Insert(15); Print();
    Insert(26); Print();
    Insert(21); Print();


}
