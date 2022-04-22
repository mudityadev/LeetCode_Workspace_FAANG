// * Stack : using Linkedlist
// ! Main operation
// * Insert data -> void push(int data)
// * Remove last element -> int pop()
// ! Auxillary Operation
// * int top() = read last element
// * int size(), int isEmpty(), int isFull()

#include<bits/stdc++.h>
using namespace std;

class StackNode{
    private:
        int data;
        StackNode* next;
    public:
        StackNode* head;
        
        StackNode* get_new_node(int data){
            StackNode* temp = new StackNode();
            temp->data = data;
            temp->next = NULL;
            return temp;
        }

        bool is_empty(){
            if(head == NULL){
                return true;
            }
            return false;
        }

        void push(int data){
            StackNode* newNode = get_new_node(data);
            newNode->next = head;
            head = newNode;
            cout << newNode->data << " pushed into the stack" << endl;
        }

        int pop(){
            if(head == NULL){
                cout << "Stack Underflow";
                return 0;
            }
            StackNode* temp = head;
            head = head->next;
            int data = temp->data;
            delete temp;
            return data;
        }

        int peek(){
            if(head == NULL){
                cout << "Stack Underflow ";
                return 0;
            }
            StackNode* temp = head;
            return temp->data;
        }
};




int main()
{
    StackNode ll;
    ll.head = NULL;
    ll.push(2);
    ll.push(4);
    ll.push(6);
    cout << endl;
    ll.pop();
    while(!ll.is_empty()){
        cout << ll.peek() << endl;
        ll.pop();
    }
    
}