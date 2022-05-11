#include<bits/stdc++.h>
using namespace std;

void recPrint(int n){
    if(n==1){
        cout << 1 << " ";
        return;
    }
    // ? 6 5 4 3 2 1
    // cout << n << " ";
    // recPrint(n-1);
    
    // ? 1 2 3 4 5 6    
    // ! signature
    recPrint(n-1);
    // tail recusion
    cout << n    << " ";
}


int main()
{
    int n = 7;
    recPrint(n);   
}