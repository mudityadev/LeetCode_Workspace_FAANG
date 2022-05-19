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
 
bool isVowel(char ch)
{
    if (ch != 'a' && ch != 'e' && ch != 'i'
        && ch != 'o' && ch != 'u')
        return false;
 
    return true;
}
void solve(){
    ll t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count =0;
        int man = 0;
        for (int i = 0; i < n; i++)
        {
            if(isVowel(s[i])){
                count++;
                continue;
            }
            else{
                 if (s[i] > 'a' && s[i] < 'e') {
                if (abs(s[i] - 'a') > abs(s[i] - 'e'))
                    man++;
                    s[i] = 'e';

                else{
                    s[i] = 'a';
                    man++;}
            }
            else if (s[i] > 'e' && s[i] < 'i') {
                if (abs(s[i] - 'e') > abs(s[i] - 'i'))
                    s[i] = 'i';
                else
                    s[i] = 'e';
            }
            else if (s[i] > 'i' && s[i] < 'o') {
                if (abs(s[i] - 'i') > abs(s[i] - 'o'))
                    s[i] = 'o';
                else
                    s[i] = 'i';
            }
            else if (s[i] > 'o' && s[i] < 'u') {
                if (abs(s[i] - 'o') > abs(s[i] - 'u'))
                    s[i] = 'u';
                else
                    s[i] = 'o';
            }
 
            // when s[i] is equal to either
            // 'v', 'w', 'x', 'y', 'z'
            else if (s[i] > 'u')
                s[i] = 'u';
            }
        }
        cout << count << endl;
        cout << s << endl;
    }
}

int main()
{
    fast_cin();
    solve();
    return 0;
}