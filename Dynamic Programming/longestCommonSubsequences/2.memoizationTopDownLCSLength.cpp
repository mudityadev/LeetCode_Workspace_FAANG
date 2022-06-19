#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

// defination 😊
int LCS(string x, string y, int n, int m){
    vector<vector<int>> t(n+1, vector<int>(m+1));

    for (int i = 0; i < n+1; i++)
    {
        for (int j = 0; j < m+1; j++)
            t[i][j] = -1;
    }

    

    // base condition 🚫
    if(n == 0 || m == 0){ return 0; }

    if(t[n][m] != -1) return t[n][m];
    
    // choice diagram
    //  if the elements are matching 🌞
    if(x[n-1] == y[m-1])
        return t[n][m] = 1 + LCS(x,y,n-1,m-1);
    
    //  if elements are not matching 😵
    // we have 2 options
    else
        return t[n][m] =  max(LCS(x,y,n,m-1), LCS(x,y,n-1,m));
}


int main()
{
    string x;
    string y;
    cin>>x>>y;
    cout << LCS(x,y,x.length(), y.length());
}