// * LinkedList : Basic Implementation

// * Note 
// * next = head ----> used for pointing
// * temp->next = head->next ----> Link fixing


// * List of programs in singly linkedlist
// * 1 - Inserting node at beginning
// * 2 - Inserting node at nth position
// * 3 - Deleting Node at giving position
// * 4 - Printing using Recusion and Reverse printing using recusion
// * 5 - Reverse Linkedlist using iterative method
// * 6 - Reverse Linkedlist using recusion



#include<bits/stdc++.h>
using namespace std;

// * 1 -> Insert a node
// * 2 -> Traverse the linkedlist

class Node{
    public:
        int data;
        Node *link;

    void insert(int data){

    }

    void read(){

    }
};




int main()
{
    // * pointer head node
    Node *A; 
    A = NULL; // ? empty list
    // * new temp node created
    Node* temp = new Node();
    // * inserting data and link -> NULL
    temp->data = 2;
    temp->link = NULL;
    // * A -> temp -> Null
    A = temp;

    // cout << temp->data << " ";


    // ? traversing linkedlist

    // * temp -> A
    Node *temp1 = A;

    while (temp1->link!=NULL)
    {
        temp1 = temp1->link;
        cout << "ans";
        cout << temp1->data << " "; 
    }
    temp1->link = temp;


    
}