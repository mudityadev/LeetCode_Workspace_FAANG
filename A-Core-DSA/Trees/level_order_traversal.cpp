// ! Header of Programs
// * Topic            -> BT level order traversal
// * Date             -> 
// * Algorithm        ->
// * Time Complexity  ->
// * Space Complexity ->
// * Explaination     -> 
// *
// *
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *left, *right;

    Node(int data){
        this->data = data;
        left = right = NULL;
    }
};


void level_order_traversal(struct Node* root){
    if(root==NULL) return;
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node* node = q.front();
      
        cout << node->data << " ";
        q.pop();

        // * enqueue left child 
        if(node->left != NULL)
            q.push(node->left);
        // * enqueue right child
        if(node->right!=NULL){
            q.push(node->right);
        } 
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

    cout <<"Level Order : ";
    level_order_traversal(root);
}