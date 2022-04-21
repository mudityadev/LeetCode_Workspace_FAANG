// * Stack - Array based implementation.
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 101

class Stack{
    private:
        int A[MAX_SIZE];
        int top = -1; // * empty size
    public:
    // ! function for PUSH data into stack ---> insertion
    void push(int data){
        // top++;
        if(top == MAX_SIZE-1){
            cout << "Error : Overflow";
            return;
        }
        A[++top] = data;
    }

    // ! function for POP data into stack ---> deletion
    void pop(){
        if(top==-1){
            cout << "Error : NO element";
            return;
        }
        top--;
    }

    // ! function for Top data into stack ---> top element
    int topp(){
        return A[top];
    }

    // ! Print Stack
    void print(){
        cout << "Stack : ";
        for (int i = 0; i <= top; i++)
        {
            cout << A[i] << " ";
        }
        cout << endl;   
    }
};



int main()
{
    Stack plate;
    plate.push(2);
    plate.print();
    plate.push(3);
    plate.push(4);
    plate.push(5);
    plate.print();
    plate.pop();
    plate.print();
    
}