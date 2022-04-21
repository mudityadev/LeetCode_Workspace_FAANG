// * Singly Linked List 
// * Basic Operations
// * 1 traversing 
// * 2 insertion
// * 3 deletion

#include<bits/stdc++.h>
using namespace std;

class Node{
    private:
        int data;
        Node* next;

    public:
    Node* head;

        void Print(){
            Node* temp = head;
            cout << "LIST : ";
            while(temp!=NULL){
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }

        int Length(){
            int count = 0;
            Node* temp = head;
            while(temp!=NULL){
                count++;
                temp = temp->next;
            }
            return count;
        }

        //! Make a Node by data
        Node* newNode(int data){
            Node* temp = new Node();
            temp->data = data;
            temp->next = NULL;
            return temp;
        }

        // ! Singly Linked List Insertion
        // * Inserting a node at beginning 
        void InsertFirst(int data){
            Node* temp = newNode(data); // * new node created
            if(head == NULL){
                temp->next = head;
                head = temp;
                return;
            }
            temp->next = head;
            head = temp;
        }
        // * Inserting a node at last -> 2 pointer used
        void InsertLast(int data){
            Node* temp1 = newNode(data);
            // * CASE 1 : No Node
            if(head == NULL){
                temp1->next = head;
                head = temp1;
                return;
            }

            // * if nodes
            Node* temp2 = head;
            while(temp2->next != NULL){
                temp2 = temp2->next;
            }

            temp1->next = temp2->next; // * temp1 -> NULL
            temp2->next = temp1;
        }
        // * Inserting a node at giving position nth
        void Insertpos(int data,int key){
            Node* temp1 = newNode(data);
            // * CASE 1: if key = 1st position
            if(key == 1){
                temp1->next = head;
                head = temp1;
                return;
            }
            // * CASE 2 : if no node
            if(head == NULL){ return; }

            // * second pointer
            Node* temp2 = head;
            
            for(int i=0;i<key-2 && temp2!=NULL;i++)
                temp2 = temp2->next;

            temp1->next = temp2->next;
            temp2->next = temp1;
        }
        
        // ! Singly Linked List Deletion
        // * Deletion a node at beginning 
        void DeleteFirst(){
            Node* temp1 = head;
            if(head == NULL){
                return;
            }

            head = temp1->next;
            delete temp1;
        }
        // * Deletion a node at last 
        void DeleteLast(){
            Node* temp1 = head;
            Node* prev;
            if(head == NULL) return;
            while(temp1->next !=NULL){
                prev = temp1;
                temp1 = temp1->next;
            }            

            prev->next = temp1->next;
            delete temp1;
        }


        // * Deletion a node at nth position 
        void DeletePos(int key){
            Node* temp,*curr;
            curr = head;
            if(key==1){
                head = curr->next;
                delete curr;
                return;
            }

            for(int i=0;i<key-2;i++)
                curr = curr->next;

            temp = curr->next;
            curr->next = temp->next;
            delete temp;

        }
};


int main()
{
    Node mm;
    mm.head = NULL;
    mm.InsertFirst(2);
    mm.InsertFirst(3);
    mm.InsertFirst(4);
    mm.InsertLast(10);
    mm.InsertLast(11);
    mm.Insertpos(12, 6);
    cout << "Length : " << mm.Length() << endl;
    cout << "Before delete:" << endl;
    mm.Print();
    cout << "After delete:" << endl;
    mm.DeletePos(6);
    mm.Print();
}