// * Doubly Linked List
// * Operations
// * Insertion and Deletion
#include<bits/stdc++.h>
using namespace std;

class Node{
    private:
    int data;
    Node* prev;
    Node* next;
    
    public:

    Node* head;
    //! Print, Length, and new Node
   void print(){
        Node* temp = head;
        cout << "Forward : ";
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    int Length(){
        Node* temp = head;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        return count;
    }
    Node* newNode(int data){
        Node* nNode = new Node();
        nNode->data = data;
        nNode->prev = NULL;
        nNode->next = NULL;
        return nNode;
    }
    // ! Insertion 
    // * Insert a node in beginning
    void insert_first(int data){
        Node* nNode = newNode(data); // * new node
        if( head == NULL ) {
            head = nNode;
            return;
        }
        head->prev = nNode;
        nNode->next = head;
        head = nNode;
    } 
    
    // * Insert a node in Last 
    void insert_last(int data){
        Node* nNode = newNode(data); //* new node create with data
        if(head == NULL){
            head = nNode;
            return;
        }
        Node* temp2 = head;
        while(temp2->next!=NULL)
            temp2 = temp2->next;
        nNode->prev = temp2;
        temp2->next = nNode;
    } 
    // * Insert a node at nth position
    void insert_nth_pos(int data, int key){
        Node* temp1 = newNode(data);
        if(head==NULL) return;
        if(key == 1){
            head->prev = temp1;
            temp1->next = head;
            head = temp1;
            return;
        }
        
        Node* curr = head;
        for(int i=0;i<key-2;i++)
            curr = curr->next;
        temp1->next = curr->next;
        temp1->prev = curr;
        curr->next = temp1;

    }

    // ! Deletion 
    // * delete a node in beginning
    void delete_first(){
        Node* temp1 = head;
        if(head == NULL) return;
        head = temp1->next;
        delete temp1;
    } 
    // * delete a node in Last 
    void delete_last(){
        Node* temp1 = head;
        Node* temp2;
        if(head==NULL) return;
        while(temp1->next != NULL)
            temp1 = temp1->next;
        
        temp2 = temp1->prev;
        temp2->next = NULL;
        delete temp1;


    } 
    // * delete a node at nth position
    void delete_nth_pos(int key){
        Node* temp = head;
        if(head == NULL) return;
        if(key == 1){
            delete_first();
        }
        int i =1;
        while(i<key && temp->next!=NULL){
            temp = temp->next;
            i++;
        }       
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        delete temp;
    }

};


int main()
{
    Node mm;
    mm.head = NULL;
    mm.insert_first(2);
    mm.insert_first(4);
    mm.insert_first(6);
    mm.insert_last(8);
    mm.insert_last(10);
    mm.print();
    // mm.delete_first();
    // mm.delete_last();
    cout << "After Delete " << endl;
    // mm.delete_nth_pos(1);
    // mm.delete_nth_pos(3);
    mm.delete_nth_pos(4);
    // mm.delete_last();
    mm.print();
    cout << "Length : "<< mm.Length() << endl;
    
}