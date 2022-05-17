#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    int n;
    cin>>n;
    while(n==1){
        if(n%2==0){
            n/=2;
        cout << n << " ";

        }else{
            n*=3;
            n+=1;
        cout << n << " ";
        }

    }
}