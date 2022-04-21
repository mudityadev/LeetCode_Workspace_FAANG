// * Stack : Implemented using Linked List
// * Insert/delete -> always on beginning part of linkedlist

#include<bits/stdc++.h>
using namespace std;

class Stack{
    private:
    int data;
    Stack* next;

    public:
    Stack* top;

    void push(int data){
        Stack* temp = new Stack();
        temp->data = data;
        temp->next = top;
        top = temp;
    }
    void pop(){
        Stack* temp;
        if(top==NULL) return;
        temp = top;
        top = top->next;
        delete temp;
    }

    void print(){
        Stack* head = top;
        cout << "Stack : ";
        while(top!=NULL){
            cout << top->data << " ";
            top = top->next;
        }
        cout << endl;
    }

};




int main()
{
    Stack pp;
    pp.top = NULL;
    pp.push(19);
    pp.push(12);
    pp.push(4);
    pp.print();
    pp.pop();
    pp.push(4);
    pp.print();
    pp.print();
}