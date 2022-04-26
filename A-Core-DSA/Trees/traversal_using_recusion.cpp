// ! Header of Programs
// * Topic            -> Tree Traversal using recusion
// * Date             -> 25/04/2022
// * Algorithm        -> preorder, inorder and postorder
// * Time Complexity  -> O(n)
// * Space Complexity -> O(n)
// * Explaination     -> below
// ! i. Breath-first 
// * '-> Level-order
// * use queue 
// * when you visit a node, insert into the queue of their children
// ! ii. Depth-first
// * '-> 1. Preorder  -> <root><left><right> 
// * '-> 2. Inorder   -> <left><root><right> 
// * '-> 3. Postorder -> <left><right><root>

#include<bits/stdc++.h>
using namespace std;

// * create a structure node
struct Node{
    int data;
    struct Node* left, *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void preOrder(struct Node* node){
    if(node == NULL) return; // * corner case

    cout << node->data << " ";
    preOrder(node->left);
    preOrder(node->right);
}

void inOrder(struct Node* node){
    if(node==NULL) return;

    inOrder(node->left);
    cout << node->data << " ";
    inOrder(node->right);
}

void postOrder(struct Node* node){
    if(node==NULL) return;

    postOrder(node->left);
    postOrder(node->right);
    cout << node->data << " ";
}



int main()
{
    struct Node* root = new Node(1);
    root->left        = new Node(2);
    root->right       = new Node(3);
    root->left->left  = new Node(4);
    root->left->right = new Node(5);
    // *            1
    // *           / \
    // *          2   3
    // *         / \ 
    // *        4   5
    cout << "preOrder Traversal : ";
    preOrder(root); // * 1 2 4 5 3
    cout << endl;
    cout << "inOrder Traversal : ";
    inOrder(root); // * 4 2 5 1 3
    cout << endl;
    cout << "postOrder Traversal : ";
    postOrder(root); // * 4 5 2 3 1     
}
