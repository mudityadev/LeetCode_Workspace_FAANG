// Time and Space Complexity -> O(n*n) and O(n*n)
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    int n,m;
    cin>>n>>m;

    // declare the adjacent matrix
    int adj[n+1][m+1];

    // taking edge as input
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin>> u >> v; 
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    // display of graph
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << adj[n][m] << " ";
        }
        cout <<"\n";
    }   
}