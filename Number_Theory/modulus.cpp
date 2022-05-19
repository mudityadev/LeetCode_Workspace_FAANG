#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
const ll M = 47;

int main()
{
    // ll n;cin>>n;
    // ll fact = 1;
    // int M = 47;
    // for (int i = 2; i <=n; i++)
    // {
    //     fact = (fact*i)%M;
    // }

    // cout << fact;
    
    vi price;
    ll n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        price.push_back(x);
    }
    ll sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = (sum + price[i])%M;
    }
    

    cout << sum << " ";
    



}