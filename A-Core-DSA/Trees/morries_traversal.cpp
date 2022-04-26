
// ? Self notes:
// ? In-order Morris Traversal:
// ? 🌳 1st case: if left is null, print current node and go right
// ? 🌳 2nd case: before going left, make right most node on left subtree connected to current node, then go left
// ? 🌳 3rd case: if thread is already pointed to current node, then remove the thread

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

void inOrder_using_morries(struct Node* node){
    // * make a empty vector
    vector<int> inorder;
    // * make a pointer to root
    Node* curr = node;
    // * 1 case : curr =! NULL
    while(curr!=NULL){
        // * if no left nodes are there
        if(curr->left!=NULL){
            // * just print right nodes
            cout << curr->data << " ";
            // inorder.push_back(curr->data);
            // * move to right
            curr = curr->right;
        }

        // * if left nodes are present
        // * make a pointer name prev and point to left sub-tree
        Node* prev = curr->left;
        while (prev->right!=NULL && prev->right != curr)
        {
            prev = prev->right;
        }

        // * now you come to left-subtree's right most node
        // * and you visiting it first time, so no thread is there so check if
        // * it pointing to null only
        if(prev->right == NULL){
            // * make a thread
            prev->right = curr;
            curr = curr->right;
        }
        else{
            // * if it is a second thread so break the thread
            prev->right = NULL;
            // cout << curr->data <<" ";
            inorder.push_back(curr->data);
            curr = curr->right;
        }
    }
    cout << "size " << inorder.size() << endl;
    for(auto v : inorder){
        cout << v << " ";

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
    cout << "InOrder Traversal using morries : ";
    inOrder_using_morries(root);

}