#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

void pos(string x, int start, int end){
    if(x==end) cout << x << endl;
    else{
        for (int i = start; i < end; i++)
        {
            swap(x[start], x[i]);
            pos(x, start+1, end);
            swap(x[start], x[i]);
        } 
        
    }
}


int main()
{
    
}

// https://www.youtube.com/watch?v=GNbnXxC5iNs