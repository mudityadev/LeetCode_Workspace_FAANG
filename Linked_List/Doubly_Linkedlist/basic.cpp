//* Doubly Linkedlist -> basic

//* Head <- [prev|data1|next] -> <- [prev|data2|next] -> <- [prev|data3|next] -> NULL 
//* reverse look-up easily
//* extra memory for prev
//*

// * List of programs for doubly linkedlist


#include<bits/stdc++.h>
using namespace std;

class Node{
    private:
    int data;
    Node* prev;
    Node* next;

    public:
    Node* head;

    Node* get_new_node(int data){
        Node* newNode = new Node(); //* create a node block in heap
        newNode->data = data;
        newNode->prev = NULL;
        newNode->next = NULL;
        return newNode;
    }
    
    void insert_at_head(int data){
        Node* newNode = get_new_node(data); //* newNode -> [null|2|null]
        if(head == NULL){
            head = newNode;
            return;
        }
        head->prev = newNode;
        newNode->next = head;
        head = newNode;

    }
    void insert_at_tail(int data){
        Node* newNode = get_new_node(data);
        if(head == NULL){
            head = newNode;
            return;
        }

        Node* temp = head;
        while(temp->next!=NULL)
            temp = temp->next;
        
        temp->next = newNode;
        newNode->prev = temp;
        newNode->next = NULL;
    }
    void print(){
        Node* temp = head;
        cout << "Forward : ";
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
    void reverse_print(){
        Node* temp = head;
        if(temp==NULL) return; // * empty list, exit

        //* Going to the last node
        while(temp->next!=NULL){ //* if you wanna to stop at last node, temp->next!=NULL
            temp = temp->next;
        }

        // * Traversing backwards using prev
        cout << "Backwards : ";
        while(temp!=NULL){
            cout << temp->data <<" ";
            temp = temp->prev;
        }
        cout << endl;

    }

};


int main()
{
    Node ll;
    ll.head = NULL;
    ll.insert_at_head(1);
    ll.insert_at_head(2);
    ll.insert_at_head(3);
    ll.insert_at_tail(4);
    ll.insert_at_tail(5);
    ll.insert_at_tail(6);
    ll.insert_at_head(0);
    ll.print();
    ll.reverse_print();

}