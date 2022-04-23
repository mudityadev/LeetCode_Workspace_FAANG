// * Queue : Using Linkedlist
#include<bits/stdc++.h>
using namespace std;

class QNode{
    private:
    int data;
    QNode* next;

    public:
        QNode * front = NULL;
        QNode * rear = NULL;

        QNode* get_new_node(int data){
            QNode* temp = new QNode();
            temp->data = data;
            temp->next = NULL;
            return temp;
        }

        void enqueue(int data){
            QNode* temp = get_new_node(data);
            if(front == NULL && rear == NULL){ // * if front and rear == NULL
                front = rear = temp;
                return;
            }
            rear->next = temp;
            rear = temp;
        }

        void dequeue(){
            QNode* temp = front;
            if(front == NULL) return;
            if(front == rear){
                front = rear = NULL;
            }
            else{
                front = front->next;
            }
            delete temp;
        }

        bool is_empty(){
            return (front == NULL & rear == NULL);
        }

        void print(){
            if(is_empty()) return;

            QNode* temp = front;
            cout << "Queue : ";
            while(temp!=NULL){
                cout << temp->data <<" ";
                temp = temp->next;
            }
            cout << endl;
        }
};


int main()
{
    QNode ll;
    ll.enqueue(2);
    ll.enqueue(3);
    ll.enqueue(4);
    ll.enqueue(5);
    ll.print();
    cout << endl;
    cout <<"After dequeue : ";
    ll.dequeue();
    ll.print();
    
}