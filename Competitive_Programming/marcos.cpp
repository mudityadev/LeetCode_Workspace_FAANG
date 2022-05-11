#include<bits/stdc++.h>
using namespace std;
// shorten code long long -> ll 
typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
// marcos
#define F first
#define S second
#define PB push_back
#define MP make_pair
// marco for loop
#define LOP(i,a,b) for (int i = a; i <= b; i++)
// marco can cause error
// ! #define SQ(a) a*a --> error
// ? #define SQ(a) (a)*(a) --> correct way


int main()
{
    // ? After this, the code
    v.push_back(make_pair(y1,x1));
    v.push_back(make_pair(y2,x2));
    int d = v[i].first+v[i].second;
    // ? can be shortened as follows:
    v.PB(MP(y1,x1)); // macro used 
    v.PB(MP(y2,x2)); // macro used
    int d = v[i].F+v[i].S; // macro used
    // normal loop
    for (int i = 1; i <= n; i++) {
        search(i);
    }
    // can be shortened as follows:
    LOP(i,1,n) search(i);

}