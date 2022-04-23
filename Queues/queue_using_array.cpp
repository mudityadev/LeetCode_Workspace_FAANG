// * Queue : Using Array
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Queue{
    private:
        int front = -1;
        int rear = -1;
        int A[MAX];

    public:
        bool is_empty(){
            if(front==-1 && rear == -1){
                return true;
            }
            return false;
        }

        bool is_full(){
            // cout << "Queue is full";
            return (rear == MAX-1);
        }

        void enqueue(int data){
            if(is_full()){return;}
            else if(is_empty()){
                front = 0; // * set front and end = 0
                rear = 0; // * set front and end = 0
            }
            else{
                rear++;
            }
            A[rear] = data;
        }

        void dequeue(){
            if(is_empty()) return;
            else if(front == rear){
                front = rear = -1;
            }
            else
                front++;
        }

        void print(){
            if(is_empty()){
                cout << "No Element" << endl;
            }
            else if (front == rear){
                cout << A[front];
            }
            else{
               for(int i=front;i<rear; front--){
                   cout << A[i] << " ";
               }
            }
        }
};


int main()
{
    Queue m;
    m.enqueue(2);
    m.enqueue(4);
    m.print();
}