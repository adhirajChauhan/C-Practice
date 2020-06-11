#include <iostream>
#include<string>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void Print(){
    Node* temp = head;
    while(temp != NULL){
        cout << temp -> data << endl;
        temp = temp -> next;
    }
    cout << endl;
}

void Insert(int data, int x){
    Node* temp = new Node();
    temp -> data = data;
    temp -> next = NULL;

    if(x == 1){
        temp -> next = head;
        head = temp;
        return;
    }
    Node* temp1 = head;
    for(int i = 0; i < x-2; i++){
        temp1 = temp1-> next;
    }
    temp -> next = temp1 -> next;
    temp1 -> next = temp;

}



int main() {

    head = NULL; //Empty List
    Insert(15,1);
    Insert(4,2);
    Insert(22,3);
    Insert(30,4);
    Insert(11,5);
    Print();
}
