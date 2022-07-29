#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

class Student{
public:
    void fun(){
        cout << "function with no arguments \n";
    }

    void fun(int n){
        cout << "function with int argu = " << n << "\n";
    }

    void fun(double n){
        cout << "function with double argu = " << n << "\n";
    }
};  


int main()
{

    // function overloading -> compile time
    Student obj;
    obj.fun();
    obj.fun(1);
    obj.fun(6.3);

}