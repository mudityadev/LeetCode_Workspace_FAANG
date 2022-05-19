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
    // * AND OR NOT XOR
    // ! And &                       
    // ? 1 | 1 -> 1
    // ? 1 | 0 -> 0
    // ? 0 | 1 -> 0
    // ? 0 | 0 -> 0

    // ! OR |
    // ? 1 | 1 -> 1
    // ? 1 | 0 -> 1
    // ? 0 | 1 -> 1
    // ? 0 | 0 -> 0
  
    // ! XOR ^
    // ? 1 | 1 -> 0
    // ? 1 | 0 -> 1
    // ? 0 | 1 -> 1
    // ? 0 | 0 -> 0

    // ! NOT !
    // ? 0 -> 1
    // ? 1 -> 0

    // ? Left Shift  -> <<
    // ? Right Shift -> >>
    int n;cin>>n;
    // int i;
    // cin>>i;
    // printBinary(n);
    // printBinary(i);
    // set bit     -> 1
    // not set bit -> 0
    // check bit set or not by '&' with their set bit position 
    // if((n&(1<<i))!=0)
    //     cout << "Set bit\n";
    // else
    //     cout <<"not set bit\n";
    

    //? set bit of any position
    // printBinary(n | 1<<1);

    printBinary(n);
    // inverse of binary
    // printBinary(~n);

    // ? unset bit
    // printBinary(n&(~(1<<3)));

    //? toggle
    // 1 -> 0
    // 0 -> 1
    // printBinary(n^(1<<5));

    int cnt =0;
    for (int i = 31; i>= 0; --i)
    {
        if((n&(1<<i))!=0){
            cnt++;
        }
    }

    cout << cnt << endl;

    cout << __builtin_popcount(n) << endl;
    

    


    
}