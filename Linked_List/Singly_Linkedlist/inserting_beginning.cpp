// * LinkedList : Inserting a node at beginning

// * Note 
// * next = head ----> used for pointing
// * temp->next = head->next ----> Link fixing

#include<bits/stdc++.h>
using namespace std;

class Node{
    private:
        int data;
        Node* next;

    public:
    // * Main Code Start
        Node* head; // * global var, access anywhere
        void Insert(int data){
            Node* temp = new Node(); //* Created a Node temp
            temp->data = data;
            temp->next = NULL;
            if(head!=NULL) temp->next = head; //* new node to previous first node
            head = temp;
        }
    // * Main Code End

        void Print(){
            // * we don't wanna to modify head var, if we do, we loss the link to start
            Node* temp = head;
            cout << "List is : ";
            while(temp!=NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;

        }
    
};

int main()
{
    Node age;
    age.head = NULL; // * empty list
    int n, x;
    cout << "How many numbers? ";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the number = ";
        cin>> x;
        age.Insert(x);
        age.Print();
    }
    
}