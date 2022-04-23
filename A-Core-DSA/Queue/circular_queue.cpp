// * Queue : Circular array based queue

#include<bits/stdc++.h>
using namespace std;

class CQueue{
    private:
    int *a;
    int size;
    int front = -1;
    int rear = -1;
    public:
    CQueue(int s){
        this->size = s;
        a = new int[this->size];
    }

    void enqueue(int data){
        if((rear+1)%size == front){
            return;
        }
        if(front  == -1) front =0;
        rear = (rear+1)%size;
        a[rear] = data;
        cout << data << " Successfull enqueued " << endl;
    }

    int dequeue(){
        if(front == -1) return 0;
        int result = a[front];
        if(front == rear) {
            front = rear = -1;
        }
        else{
            front = (front+1)%size;
        }
        return result;
    }

};
 

int main()
{
    CQueue m(5);
    m.enqueue(2);
    m.enqueue(4);
    m.enqueue(5);
    cout << "dequeue : "<< m.dequeue() << " ";
    cout << "dequeue : "<< m.dequeue() << " ";
    cout << "dequeue : "<< m.dequeue() << " ";

}