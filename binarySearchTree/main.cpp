#include<bits/stdc++.h>
using namespace std;
#define ll long long    
#define vi vector<ll>
 
class Node{
private:
    int data;
    Node* left;
    Node* right;        
public:
    Node createNode(int data){
        Node* newNode = new Node();
        newNode->data = data;
        return newNode;
    }

    Node Insert(Node root, int data){
        if(root == NULL){
            createNode(data);
        }

        if(root.data > data){
            root.left  = Insert(root.left, data);
        }
        else{
            root.right = Insert(root.right, data);
        }

        return root;
    }
    
};


int main()
{
    Node* root = NULL;
    
}