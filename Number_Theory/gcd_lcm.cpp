#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

// concept -> gcd
int_fast32_t gcd_h(int a, int b){
    // ?gcd -> hcf
    // greatest common divisor


    // ? LCM formula
    // a*b 
    // ---  == LCM
    // GCD

    if(a%b!=0){
        gcd_h(b, a%b);
    }else
        return b;
}


int main()
{
    int a,b;
    cin>>a>>b;
    // cout << gcd_h(a,b);
    

    cout << "LCM = " << a*b/__gcd(a,b);
}

