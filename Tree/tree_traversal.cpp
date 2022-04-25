// * Tree Traversal
// ! 3 Type
// * 1. InOrder
// * 2. PreOrder
// * 3. PostOrder
// *
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;
};

Node* newNode(int data){
    Node* temp = new Node();
    temp->data = data;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

void printPreOrder(struct Node* node){
    if(node == NULL) return;

    cout << node->data <<" ";
    printPreOrder(node->left);
    printPreOrder(node->right);
}


void printInOrder(struct Node* node){
    if(node == NULL) return;

    printInOrder(node->left);
    cout << node->data <<" ";
    printInOrder(node->right);
}


void printPostOrder(struct Node* node){
    if(node == NULL) return;

    printPostOrder(node->left);
    printPostOrder(node->right);
    cout << node->data <<" ";
}



int main()
{
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    cout << "Preorder traversal : ";
    printPreOrder(root);
    cout << endl;
    cout << "Inorder traversal : ";
    printInOrder(root);
    cout << endl;
    cout << "Postorder traversal : ";
    printPostOrder(root);
}