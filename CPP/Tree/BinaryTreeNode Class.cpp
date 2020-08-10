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


int main (){

}
