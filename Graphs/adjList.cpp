#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{   
    int n, m;
    cin>> n >> m;

    vector<int> adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>> u >> v;
        // if undirected graph
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
}