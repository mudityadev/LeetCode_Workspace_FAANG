#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
const int M = 1e9+7;

ll binaryExpoRec(ll a, ll b){
    if(b==0) return 1;
    ll res = binaryExpoRec(a, b/2);
    if(b&1){
        return a * res*res;
    }else
    {
        return res*res;
    }
}


ll binExpo(ll a, ll b){
    ll ans = 1;
    while (b)
    {
        if(b&1){
            ans = (ans*a)%M;
        }
        a = (a*a)%M;
        b>>=1;
    }
    return ans;    
}

int main()
{
    // cout << binaryExpoRec(2,3);    
    // cout << binExpo(2,3);    
    cout << binExpo(2123123,123231);    
}
