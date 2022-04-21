// * LinkedList : Reverse the linkedlist

// * Note 
// * next = head ----> used for pointing
// * temp->next = head->next ----> Link fixing

#include<bits/stdc++.h>
using namespace std;

class Node{
    private:
    int data;
    Node * next;
    public:
    Node* head;

    // ! Function to Insert the Data in given nth position
    void Insert_pos(int data, int pos){
        // * first work to create a node
        Node* temp1 = new Node();
        temp1-> data = data;
        temp1->next = NULL;
        // * temp1 -> NULL
        // * If the position is first place
        if(pos==1){
            // * point the temp1 node where the head node pointing
            temp1->next = head;
            head = temp1;
            return;
        }

        //* pointer and traverse
        Node* temp2 = head;
        for (int i = 0; i < pos-2; i++) 
        {
            temp2 = temp2->next;
        }

        // * link changing
        temp1->next = temp2->next;
        temp2->next = temp1;
    }

    // ! Function to Print Data
    void Print(){
        Node* temp = head;
        cout << "LIST is: ";
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
    }
    
    // ! Function to Delete the Data by index
    void Delete(int key){
        Node* temp1 = head;
        if(key==1){
            head = temp1->next; //* linked to next of 1st node
            delete temp1;
            return;
        }

        // * traverse though list
        for (int i = 0; i < key-2; i++)
        {
            temp1 = temp1->next;
        }

        Node* temp2 = temp1->next;
        temp1->next = temp2->next;
        delete temp2;
    }


    // ! Function to Reverse the Linkedlist
    void Reverse(){
        // * H -> 2 -> 4 -> 6 -> 8 -> NULL
        Node* prev, *current, *next; // * pointer var, Node type
        
        prev = NULL; // * prev -> 0
        current = head; // * current -> head
        
        while(current!=NULL){
            // * next -> 4
            next = current->next;
            // * 2 -> NULL
            current->next = prev;
            // * prev -> current
            prev = current;
            // * current -> next
            current = next;
        }
        // * H -> 8 (prev)
        head = prev;
    }

    // ! Function to Reverse the Linkedlist by recusion
    void ReverseRec(Node* p){
        // * base condition
        if(p->next == NULL){
            head = p;
            return;
        }

        ReverseRec(p->next);
        
        Node* q = p->next; //* pointing
        q->next = p; // * reversing
        // {
                // p->next->next = p;
        // }
        p->next = NULL;
    }

};


int main()
{
    Node car;
    car.head = NULL; //* head -> NULL
    car.Insert_pos(2,1); //* LIST : 2
    car.Insert_pos(4,2); //* LIST : 2,4
    car.Insert_pos(6,3); //* LIST : 2,4,6
    car.Insert_pos(8,4); //* LIST : 2,4,6,8
    car.Print();   
    cout << endl;
    cout << "Reversed List : ";
    car.Reverse();
    car.Print();

}