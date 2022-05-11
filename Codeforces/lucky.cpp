#include<bits/stdc++.h>
using namespace std;


// 5
// 213132
// 973894
// 045207
// 000000
// 055776
int main()
{
    int t;
    cin>>t;
    while (t--)
    {  
    string s;
    cin>>s;
    int sum1 = 0;
    int sum2 = 0;

    for (int i = 0; i < 3; i++)
    {
        sum1+=s[i]-'0';
    }

    for (int i = 3; i < 6; i++)
    {
        sum2+=s[i]-'0';
    }
    if (sum1==sum2)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout <<"NO" << endl;
    }
    }
}