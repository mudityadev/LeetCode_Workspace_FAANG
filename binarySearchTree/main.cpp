#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

class BST{
private:
    int data;
    BST* left;
    BST* right;

public:
    // constructor
    BST();
    // parameterized constructor
    BST(int);
    // insert function
    BST* insert(BST*, int data);
    // delete function
    BST* deleteElement(BST*, int data);
    // find Maximum
    BST* findMax(BST*);
    // find Minimum
    BST* findMin(BST*);
    // display inorder function
    void inorder(BST*);
};

BST::BST()
    : data(0), left(NULL), right(NULL)
{
}

BST :: BST(int value){
    data = value;
    left = right = NULL;
}

BST* BST::findMax(BST* root){
    if(!root){
        cout << "NO element in BST";
        return NULL;
    }
    while(root->right!=NULL){
        root = root->right;
    }

    return root;
}

BST* BST::findMin(BST* root){
    if(!root){
        cout << "NO element in BST";
        return NULL;
    }
    while(root->left!=NULL){
        root = root->left;
    }

    return root;
}

BST* BST :: insert(BST* root, int value){
    if(!root){
        return new BST(value);
    }
    if(value < root->data){
        root->left = insert(root->left, value);
    }
    else{
        root->right = insert(root->right, value);
    }
    return root;
}

void BST :: inorder(BST* root){
    if(!root){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}


BST* BST::deleteElement(BST* root, int value){
    BST* temp = new BST();
    if(!root){
        cout << "NO value";
        return NULL;
    }
    else if(data < root->data){
        root->left = deleteElement(root->left, value);
    }
    else if(data > root->data){
        root->right = deleteElement(root->right, value);
    }else{
        if(root->left && root->right){
            temp = findMax(root->left);
            root->data = temp->data;
            root->left = deleteElement(root->left, root->data);
        }
        else{
            temp = root;
            if(root->left == NULL)
                root = root->right;
            if(root->right == NULL)
                root = root->left;
            delete(temp);
        }
    }
    return root;
}


int main()
{
    BST b, *root = NULL;
    root = b.insert(root, 20);

    for (int i = 0; i < 5; i++)
    {
        b.insert(root, i+10);
    }
    
    b.inorder(root);
    b.deleteElement(root, 12);
    cout <<"\n after \n";
    b.inorder(root);
}