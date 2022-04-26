// ! Header of Programs
// * Topic            -> Tree Traversal using stack and without recusion
// * Date             -> 25/04/2022
// * Algorithm        -> using stack
// * Time Complexity  -> O(n)
// * Space Complexity -> O(n)
// * Explaination     -> use stack for store nodes 
// *


#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left, *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};

void inOrder_using_stack(struct Node* node){
    stack<Node*> s;
    struct Node* curr = node;

    while(curr!=NULL || s.empty() == false){
        while(curr!=NULL){
            s.push(curr);
            curr = curr->left;
        }

        curr = s.top();
        s.pop();

        cout << curr->data << " ";
        curr = curr->right;
    }
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
    cout << "InOrder Traversal using stack : ";
    inOrder_using_stack(root);

}