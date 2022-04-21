// * Inserting a node at any give nth position

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
    void Print(){
        Node* temp = head;
        cout << "LIST is: ";
        while(temp!=NULL){
            cout << temp->data << " ";
            temp = temp->next;
        }

        cout << endl;
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
}