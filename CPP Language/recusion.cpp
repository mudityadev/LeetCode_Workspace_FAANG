#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    //* base case
    if(n==1)
        return 1;

    return n*fact(n-1);
}

int main()
{
    int n = 5;
    cout << fact(n);   
}