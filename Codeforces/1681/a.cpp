#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h> 
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pl> > vvpl;
typedef vector<pl> vpl;
typedef vector<pi> vpi;
ll MOD = 1'000'000'007;
double eps = 1e-12;
#define fo(i,e) for(ll i = 0; i < e; i++)
#define foo(i,s,e) for(ll i = s; i < e; i++)
#define rfo(i,s) for(ll i = s; i >= 0; i--)
#define rfoo(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define deb(x) cout << #x <<" = "<< x << endl
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
 

void solve(){
    ll t = 1;
    cin >> t;
    while(t--) {
        int x;
        int n;
        cin>>n;
        vi al;
        for (int i = 0; i < n; i++)
        {
            cin>>x;
            al.emplace_back(x);
        }


        int m;
        cin>>m;
        vi bob;
        for (int i = 0; i < m; i++)
        {
            cin>>x;
            bob.emplace_back(x);
        }
        

        int maxi_a = *max_element(al.begin(), al.end());
        int maxi_b = *max_element(bob.begin(), bob.end());


        if(maxi_a>=maxi_b){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }

        if(maxi_a>maxi_b){
            cout << "Alice" << endl;
        }else{
            cout << "Bob" << endl;
        }


    }
}

int main()
{
    fast_cin();
    solve();
    return 0;
}