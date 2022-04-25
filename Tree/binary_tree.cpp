// * Binary Tree -> at most 2 children
// *            root
// *           /    \
// *   left child   right child
// *    /    \
// *  NULL     R1
// ! Stick Binary Tree -> node can 0 or 2 children
// * complete binary tree -> all filled
// * Implementation
// * Array or Dynamically created Node (doubly linkedlist)
// *
#include<bits/stdc++.h>
using namespace std;


class Node{
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int main()
{
    Node * root = new Node(2);
    // * root = 2
    // *       / \
    // *    NULL  NULL
    root->left = new Node(4);
    root->right = new Node(6);

    root->left->left = new Node(1);
}