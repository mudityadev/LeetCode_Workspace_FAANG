#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    vi v{10, 20, 30, 30, 31, 40, 50};
    auto low = lower_bound(v.begin(),v.end(),30);
    auto high = upper_bound(v.begin(),v.end(),30);

    cout << (low - v.begin()) << " ";
    cout << (high - v.begin()) << " ";
   
}