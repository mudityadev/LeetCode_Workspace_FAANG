#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

// defination 😊
int LCS(string x, string y, int n, int m){
    // base condition 🚫
    if(n == 0 || m == 0){ return 0; }
    // choice diagram
    //  if the elements are matching 🌞
    if(x[n-1] == y[m-1])
        return 1 + LCS(x,y,n-1,m-1);
    //  if elements are not matching 😵
    // we have 2 options
    else
        return max(LCS(x,y,n,m-1), LCS(x,y,n-1,m));
}


int main()
{
    string x;
    string y;
    cin>>x>>y;
    cout << LCS(x,y,x.length(), y.length());
}