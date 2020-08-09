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
};


void printTree(TreeNode<int>* root){
   if(root==NULL){
    return ;
   }
   cout<<root->data<<": ";
   for(int i=0;i<root->children.size();i++){
    cout<<root->children[i]->data<<" ,";
   }
   cout<<endl;

   for(int i=0;i<root->children.size();i++){
    printTree(root->children[i]);
   }
}

/*void printTree(TreeNode<int>* root){
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

}*/

/*TreeNode<int>* takeInputLevelWise(){
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
}*/

TreeNode<int>* takeInputLevelWise(){
    int rootData;
    cout<<"Enter root data"<<endl;
    cin>>rootData;
    TreeNode<int>* root = new TreeNode<int>(rootData);
    queue<TreeNode<int>*> q;
    q.push(root);

    while(!q.empty()){
        TreeNode<int>* f = q.front();
        q.pop();

        cout<<"Enter no of children of "<<f->data<<endl;
        int n;
        cin>>n;

        for(int i=1;i<=n;i++){
            int childData;
            cout<<"Enter "<<i<<" th child of "<<f->data<<endl;
            cin>>childData;

            TreeNode<int>* child = new TreeNode<int>(childData);
            q.push(child);
            f->children.push_back(child);
        }
    }
    return root;
}


int main(){

    /*TreeNode<int>* root = new TreeNode<int>(1);
    TreeNode<int>* n1 = new TreeNode<int>(2);
    TreeNode<int>* n2 = new TreeNode<int>(3);

    root->children.push_back(n1);
    root->children.push_back(n2);
*/
    TreeNode<int>* root = takeInputLevelWise();
    printTree(root);
}
