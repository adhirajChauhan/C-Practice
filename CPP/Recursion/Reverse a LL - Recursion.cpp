#include <iostream>
using namespace std;

class Node{
public:
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

void ReversePrint(Node* p){
    if(p == NULL){
        return;
    }

    ReversePrint(p -> next);
    cout << p -> data << " ";
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

void Reverse(Node* p){

    if(p -> next == NULL){
        head = p;
        return;
    }

    Reverse(p ->next);
    Node* q = p -> next;
    q -> next  = p;
    p -> next = NULL;

}




int main(){

    Insert(5);
    Insert(10);
    Insert(15);
    Insert(20);

    ReversePrint(head);

    cout << endl;

    Reverse(head);

    ReversePrint(head);

}
