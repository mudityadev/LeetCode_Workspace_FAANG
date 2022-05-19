#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


// void concept
void conceptofxor(){
    //? logic 
    // 1 0 --> 1
    // 0 1 --> 1
    // 0 0 --> 0
    // 1 1 --> 0

    //? properties
    // x^ x == 0
    // x^ 0 == x
    // x ^ y ^ z == z ^ x ^ y == y ^ z ^ x  
    
}


// void swap the element
void swap(){
    //? swap the number
    int a = 4;
    int b = 7;
    a = a ^ b;
    b = a ^ b; // b --> a
    a = a ^ b; // a --> b
    cout << a << " " <<  b << endl;
}

int main()
{
    
    int n;
    cin>>n;
    int x;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ans ^= x;
    }

    cout << ans;
}