#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template <typename T>

class BTNode{
public:
    T data;
    BTNode* left;
    BTNode* right;

    BTNode(T data){
        this -> data = data;
        left = NULL;
        right = NULL;
    }

    ~BTNode(){
        delete left;
        delete right;
    }
};

///-----------------------------------------------------------

///Take input recursive (Bad way)

BTNode<int>* takeInputRecursive(){
    int rootData;
    cout << "Enter data"<<endl;
    cin >> rootData;

    if(rootData == -1){
        return NULL;
    }
///Now we will create node with root data

    BTNode<int>* root = new BTNode<int>(rootData);
///Then we will take input for left and right node recursive

    BTNode<int>* leftChild = takeInputRecursive();
    BTNode<int>* rightChild = takeInputRecursive();
///Now we will  establish the connection
    root->left = leftChild;
    root->right = rightChild;

    return root;

}

///-----------------------------------------------------------

///Take input level wise

BTNode<int>* takeInputLevelWise(){
    int rootData;
    cout << "Enter root data : " << endl;
    cin >> rootData;

    //create a new node
    BTNode<int>* root = new BTNode<int>(rootData);
    //create queue and node in it
    queue<BTNode<int>*> q;
    q.push(root);

    //until q is not empty, we'll pop elements from the front and make connection with children
    while(!q.empty()){
        BTNode<int>* f = q.front();
        q.pop();

        cout << "Enter left child of " << f->data<<endl;
        int leftChildData;
        cin >> leftChildData;

        if(leftChildData != -1){
            ///now here we'll do create push and connect
            BTNode<int>* child  = new BTNode<int>(leftChildData);
            q.push(child);
            f->left = child;
        }

        cout << "Enter right child of " << f->data<<endl;
        int rightChildData;
        cin >> rightChildData;

        if(rightChildData != -1){
            ///now here we'll do create push and connect
            BTNode<int>* child  = new BTNode<int>(rightChildData);
            q.push(child);
            f->right = child;
        }
    }
    return root;
}


///-----------------------------------------------------------

///Printing the tree

void printTree(BTNode<int>* root){
    if(root == NULL){ ///base case
        return;
    }

    cout << root ->data << " : ";

    if(root->left != NULL){
        cout <<"L" << root->left->data;
    }
    if(root->right != NULL){
        cout <<"R" << root->left->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
}


int main (){

    /*BTNode<int>* root = new BTNode<int>(1);
    BTNode<int>* n1 = new BTNode<int>(2);
    BTNode<int>* n2 = new BTNode<int>(3);

    root -> left = n1;
    root -> right = n2;*/

    BTNode<int>* root = takeInputLevelWise();
    printTree(root);
}
