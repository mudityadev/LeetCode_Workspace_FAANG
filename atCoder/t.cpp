
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num = 654321;
    int k = 2;
    int x = pow(10, ((k+1)-1));
    num = num/k;
    cout << num << " ";
    // int v = num%10/10+num%1000;
    int v = num%10/10+num%k;


    cout << v << " ";
}