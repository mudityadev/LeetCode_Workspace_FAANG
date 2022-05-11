#include<bits/stdc++.h>
using namespace std;

int fact(int n){

    // base condition
    if(n == 1){
        return 1;
    }
    // n*fun(n-1)*3*2*1
   return n*fact(n-1);
}


int main()
{
    cout << fact(5) << " ";
    
}