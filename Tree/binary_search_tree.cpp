// * Binary Search Tree or BST
// * value of all nodes in left subtree is lesser
// * value of all nodes in right subtree is greater
// !                     root
// *                     / \
// *                    /   \
// !        left-subtree     right-subtree
// *     (lesser or equal)     (greater)

// * Implementation -> Insertation and Search
// * max and minimum
// * find height

// ! 1. Breath-first 
//* '-> Level-order
// * use queue 
// * when you visit a node, insert into the queue of their children
// ! 2. Depth-first
// * '-> 1. Preorder  -> <root><left><right> 
// * '-> 2. Inorder   -> <left><root><right> 
// * '-> 3. Postorder -> <left><right><root>


#include<bits/stdc++.h>
using namespace std;

class BSTNode{
    private:
        int data;
        BSTNode* left;
        BSTNode* right;
    public:
        BSTNode* root; //* root pointer to point on root node
        BSTNode* get_new_node(int data){
            BSTNode* temp = new BSTNode();
            temp->data = data;
            temp->left = temp->right = NULL;
            return temp;
        }

        BSTNode* insert(BSTNode* root, int data);
};

BSTNode* BSTNode::insert(BSTNode* root,int data){
    if(root == NULL){
        cout << root->data << " success main" << endl;
        root = get_new_node(data);
    }
    else if(data <= root->data){
        cout << root->data << " success left" << endl;
        root->left = insert(root->left, data);
    }
    else{
        cout << root->data << " success right" << endl;
        root->right = insert(root->right, data);
    }
    return root;
}




int main()
{
    BSTNode* root,m;
    root = NULL;
    root = m.insert(root, 12);
    root = m.insert(root, 12);
  

}