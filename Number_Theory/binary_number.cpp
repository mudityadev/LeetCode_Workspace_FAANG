#include<bits/stdc++.h>
using namespace std;

const int M = 1e+5+10;


int main()
{
    cout << INT_MAX << "\n";
    // * 1 << n = 2^n
    int a = (1LL<<31) - 1;
    cout << a << endl;   
    // ? signed = +ve and -ve both
    // ? unsigned = +ve only
    unsigned int b = (1LL<<32) - 1;
    cout << b;
}