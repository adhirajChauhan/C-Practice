#include <iostream>
#include<string>

using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head;

void Insert(int x){
    Node* temp = new Node();
    temp -> data = x;
    temp -> next = NULL;

    head = temp;
}

void Print(){
    Node* temp1 = head;
    while(temp1 -> next != NULL){
            cout << temp1 -> data << " ";
            temp1 = temp1 -> next;

    }
    cout << endl;
}

int main() {
    head = NULL;
    int x,n,i;
    cout << "how may numbers do you want to print : " << endl;
    cin >> n;

    for(i = 0; i < n ; i++){
        cout << " Enter the number : " << endl;
        cin >> x;
        Insert(x);
        Print();
    }


}
