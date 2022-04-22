// * Stack : using Array
// ! Main operation
// * Insert data -> void push(int data)
// * Remove last element -> int pop()
// ! Auxillary Operation
// * int top() = read last element
// * int size(), int isEmpty(), int isFull()


#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
class Stack{
    
    private:
    int top;
    int arr[MAX];

    public:
    Stack(){this->top = -1;}

    bool is_empty(){
        return (top<0);
    }

    bool is_full(){
        return (top>=MAX);
    }

    void push(int data){
        if(is_full()){
            cout <<"Error : Overflow";
        }
        cout << "data succesfully pushed : " << data; 
        arr[++top] = data;
        cout << endl;
    }

    int pop(){
        if(top<0){
            cout << "Error : Underflow";
            return 0;
        }
        return arr[top--];
    }

    int size(){
        return top+1;
    }

    int peek(){
        if(is_empty()){
            cout << "Stack Underflow : ";
            return 0;
        }
        return arr[top];
    }
};


int main()
{
    Stack pp;
    pp.push(20);
    pp.push(40);
    pp.push(60);
    pp.push(80);
    pp.push(100);

    cout << pp.pop() << " popped from stack" << endl;

    while(!pp.is_empty()){
        cout << pp.peek() << endl;
        pp.pop();        
    }    
}