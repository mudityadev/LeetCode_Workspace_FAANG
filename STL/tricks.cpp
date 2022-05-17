#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


void printBinary(int num){
    for (int i = 10; i >= 0; --i)
    {
        cout << ((num>>i)&1);
    }
    cout <<endl;
}


int main()
{
    // for (int i = 0; i < 8; i++)
    // {
    //     printBinary(i);
    //     if(!i&1) cout << "even\n";
    //     else cout << "odd\n"; 
    // }       

    int n;
    cin>>n;
    cout << (n>>1) << endl;
    cout << (n<<1) << endl;
} 