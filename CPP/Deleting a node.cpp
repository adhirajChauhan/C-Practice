#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

Node* head;

Node* GetNewNode(int x){
    Node* newNode = new Node();
    newNode -> data = x;
    newNode -> prev = NULL;
    newNode -> next = NULL;
    return newNode;

}

void Insert(int x){
    Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }

    head -> prev = newNode;
    newNode -> next = head;
    head = newNode;
}

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp->data<<endl;
        temp = temp->next;
    }
    cout << endl;

}

void Delete(int x){
    Node* temp = head;
    if( x == 1){
        head = temp -> next;
        delete temp;
        return;
    }

    int i;
    for(i = 0; i <= x-2; i++){
        temp = temp -> next;
    }

    Node* temp1 = temp -> next;
    temp -> next = temp1 -> next;
    delete temp1;

}

int main() {
    Insert(5);
    Insert(17);
    Insert(33);
    Insert(47);
    Insert(22);
    Insert(99);
    Print();

    int n;
    cout << "Enter a position to delete : " << endl;
    cin >> n;
    Delete(n);
    Print();


}
