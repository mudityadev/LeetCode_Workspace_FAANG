#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    float x, y;
    cin>>x>>y;
    float res = 1.07*x;
    if(res-y>=0){
        cout <<"YES" << endl;
    }
    else if(res-y < 0){
        cout << "NO" <<endl;
    }

}}