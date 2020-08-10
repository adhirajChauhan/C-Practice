#include<iostream>
#include<vector>
#include<queue>
using namespace std;

template<typename T>
class TreeNode{
   public:
       T data;
       vector<TreeNode<T>*> children;
       TreeNode(T data){
          this->data = data;
       }
       ~TreeNode(){
            for(int i = 0; i < children.size(); i++){
                delete children[i];
            }
       }
};

//--------------------------------------------------------------

///PRINTING OUTPUT RECURSIVELY
void printTree(TreeNode<int>* root){
    if(root==NULL){
    return ;
   }
    cout << root->data << ": ";
    ///To print the data of the children

    for(int i = 0; i < root->children.size();i++){
        cout << root->children[i]->data << " ,";
    }
    cout << endl;

    for(int i = 0; i < root->children.size();i++){
        printTree(root->children[i]);

    }

}

//--------------------------------------------------------------

///PRINTING OUTPUT LEVEL WISE
void printTreeLevelWise(TreeNode<int>* root){
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout << f->data << ": ";

        for(int i = 0; i < f->children.size();i++){
            cout << f->children[i]->data << " ,";
        }
        cout << endl;

        for(int i = 0; i < f->children.size(); i++){
            q.push(f->children[i]);
        }
    }
}

//--------------------------------------------------------------

///TAKING INPUT LEVEL WISE
TreeNode<int>* takeInputLevelWise(){
    ///1.create the node 2. Push the node in queue 3. Connect
    ///Taking user input and storing it in rootData
    int rootData;
    cout << "Enter the root data " << endl;
    cin >> rootData;

    ///Creating a new Node
    TreeNode<int>* root = new TreeNode<int>(rootData);

    ///Pushing in queue
    queue<TreeNode<int>*> q;
    q.push(root);
    //We won't do connecting operation for the first node

    ///Constructing the tree
    while(!q.empty()){
        ///Now the first element is stored in the queue and we will pop it from the front

        TreeNode<int>* f = q.front();
        q.pop();

        ///Asking for the no of children of first node and storing them in var n
        cout << "Enter the number of children of " << f->data << endl;
        int n;
        cin >> n;

        ///now whatever the number user enters, we have to run the loop that many times
        ///and do the create, push and connect operation each time

        for(int i = 1; i <= n; i++){
            ///taking input for children of node
            int childData;
            cout << "Enter " << i << " th child of " << f->data << endl;
            cin >> childData;

            ///creating node
            TreeNode<int>* child = new TreeNode<int>(childData);
            ///push in queue
            q.push(child);
            ///connect
            f->children.push_back(child);
        }

    }
    return root;
}

//--------------------------------------------------------------

///COUNTING NODES IN A TREE
int countNodes(TreeNode<int>* root){
    //edge case
    if(root == NULL){
        return 0;
    }
    int ans = 1;

    for(int i = 0; i < root->children.size(); i++){
        ans += countNodes(root->children[i]);
    }
    return ans;

}

//--------------------------------------------------------------

///CALCULATING HEIGHT OF THE(HEIGHT IS THE COUNT OF LEVELS)

int height(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    int max = 0;

    for(int i = 0; i < root->children.size(); i++){
        int childHeight = height(root->children[i]);
        if(childHeight > max){
            max = childHeight;
        }
    }
    return max + 1;
}

//--------------------------------------------------------------

///Question -> Print the values of all the nodes present at level k/depth d

void printAtLevelK(TreeNode<int>* root , int k){
    if(root == NULL){ //edge case
        return;
    }

    if(k == 0){
        cout << root -> data<<endl;
        return;
    }
    for(int i = 0; i < root->children.size(); i++){
        printAtLevelK(root->children[i] , k-1);
    }
}

//--------------------------------------------------------------

///Count leaf nodes (Leaf nodes -> don't have children)

int countLeafNode(TreeNode<int>* root){
    if(root == NULL){
        return 0;
    }
    if(root->children.size() == 0){
        return 1;
    }

    int ans = 0;
    for(int i = 0; i < root->children.size(); i++){
        ans += countLeafNode(root->children[i]);
    }
    return ans;
}

//--------------------------------------------------------------

///Pre Order traversal (First print the node and then its children (kind of similar to recursive print without fancy part))

void preOrder(TreeNode<int>* root){

    if(root == NULL){ //edge case
        return;
    }

    cout << root->data << " ";

    for(int i = 0; i < root->children.size(); i++){
        preOrder(root->children[i]);
    }

}

//--------------------------------------------------------------

///Post Order traversal (First print the children and then node (opposite of pre order))
void postOrder(TreeNode<int>* root){

    if(root == NULL){ //edge case
        return;
    }

    for(int i = 0; i < root->children.size(); i++){
        postOrder(root->children[i]);
    }

    cout << root->data << " ";
}

//--------------------------------------------------------------

///Delete Tree (First we will delete the child and then the root

void deleteTree(TreeNode<int>* root){
    if(root == NULL){ //edge case
        return;
    }

    for(int i = 0; i < root->children.size(); i++){
        deleteTree(root->children[i]);
    }
    delete root;
}

/// 1 3 2 3 4 2 5 6 2 7 8 0 0 0 0 1 9 0
int main(){

    /*TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1 = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
*/
    TreeNode<int>* root = takeInputLevelWise();
    //printTree(root);
    //printTreeLevelWise(root);

    cout << "There are " <<countNodes(root) << " node(s)" << endl;
    cout << "Height of the tree is : " <<height(root) << endl;

    printAtLevelK(root,2);

    cout << "No of leaf nodes " << countLeafNode(root) << endl;

    cout << "PreOrder Traversal " << preOrder(root)<< endl;
    cout << "PostOrder Traversal " << postOrder(root)<< endl;

    delete root; ///(We have created a deconstructor, it will call the deconstructor first which will delete the children first and then the root)
}
