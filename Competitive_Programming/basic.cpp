#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;cin>>t;
    while(t--){
        

    long long n;
    cin>>n;
    ll mini = n/6;
    ll maxi = n/4;
    if(n==0) {cout << -1 << endl;}
    else if(1 <= mini && mini < maxi){
        cout << mini << " " << maxi << endl;
    }else{
       ll res = n - 4;
       if(n == 4){
           cout << 1 << " " << 1 << endl;
       } else if(res%2==0){
           cout << 1 << " " << 1 << endl;
       }
       else {
           cout << -1 << endl;
       }
       
    }
    }
}