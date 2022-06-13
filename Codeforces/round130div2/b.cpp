#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    int num, q;
    cin>>num>>q;
    int ans[num];

    for (int i = 0; i < num; i++)
    {
        cin>>ans[i];
    }

    sort(ans, ans+num, greater<int>());

    long long result[num+1];

    result[0] = 0;
    for (int i = 1; i < num+1; i++)
    {
        result[i] = ans[i-1]+result[i-1];
    }
    while (q--)
    {
        int x, y;
        cin>>x>>y;
        cout << result[x] - result[x-y] << "\n";
    }
    
}