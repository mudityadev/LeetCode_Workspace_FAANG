#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


void printBinary(int num){
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num>>i)&1);
    }
    cout <<endl;
}


int main()
{
    // char B = 'B';
    // // uppercase to lowercase
    // char b = B | ' ';
    // cout << b << endl;

    // // lowercase to uppercase 
    // char a = 'a';
    // char d = a&'_';
    // cout << d<< endl;


    // clear 4th bit all from LSB
    printBinary(59);
    int a = 59;
    int i= 4;
    int b= (a&(~((1<<(i+1)) -1 )));
    printBinary(b);

    // clear MSB
    int g =3;
    int c = (a&((1<<(g+1))-1));
    printBinary(c);


    // check if the no if power of 2 or not
    int n = 32;
    if(n&(n-1)) cout <<"NOt power of 2";
    else cout << "Power of 2";

    
    

} 