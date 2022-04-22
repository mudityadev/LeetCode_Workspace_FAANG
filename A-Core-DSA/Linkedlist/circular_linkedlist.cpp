// * Circular Linked List
// * operations
// * insertion(front and end) and deletion(front and end)
#include <bits/stdc++.h>
using namespace std;

class Node
{
private:
    int data;
    Node *next;

public:
    Node *head;
    // ! Function -> Length, Print and Allocate new Node
    // * new Node Creation
    Node *get_new_node(int data)
    {
        Node *temp = new Node();
        temp->data = data;
        temp->next = temp;
        return temp;
    }

    // * Print the cicular list
    void print()
    {
        Node *temp = head;
        if(head==NULL) return;
        cout << "Circular List : ";
        do
        {
            cout << temp->data << " ";
            temp = temp->next;
        } while (temp->next != head);
        cout << endl;
    }
    // * Count the cicular list
    int count()
    {
        Node *temp = head;
        int count = 0;
        if (head == NULL)
            return 0;
        cout << "Circular List : ";
        do
        {
            count++;
            temp = temp->next;
        } while (temp->next != head);
        return count;
    }

    // ! Insertion
    // * Insertion from front
    void insert_front(int data) {
        Node* newNode = get_new_node(data);
        Node* temp = head;
        if(head == NULL){
            head = newNode;
            return;
        }

        while(temp->next != head)
            temp = temp->next;
        newNode->next = head;
        temp->next = newNode;
        head = newNode;
    }
    // * Insertion from end
    void insert_end(int data) {
        Node* newNode = get_new_node(data);
        Node* temp = head;
        if(head == NULL){
            head = newNode;
            return;
        }
        while(temp->next != head){
            temp = temp->next;
        }
       
        newNode->next = head;
        temp->next = newNode;
    }

    // ! Deletion
    // * Deletion from front
    // void delete_front() {}
    // * Deletion from end
    void delete_end() {
        Node* prev, * curr;
        curr = head;
        if(head == NULL) return;
        while(curr->next!=NULL){
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        delete curr;
    }
};

int main()
{
    Node ll;
    ll.head = NULL;
    // ll.insert_end(1);
    // ll.insert_end(1);
    // ll.insert_end(2);
    // ll.insert_end(3);
    ll.insert_front(1);
    ll.insert_front(2);
    ll.insert_front(1);
    ll.print();
    ll.delete_end();
    ll.delete_end();
    ll.print();

    // cout << "Length = " << ll.count() << endl;
}