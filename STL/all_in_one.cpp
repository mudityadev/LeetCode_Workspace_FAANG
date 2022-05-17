#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>

int cnt_divisor(int n){
    int cnt=0;
    for(int i=1;i*i<=n;i++)
        if(n%i==0){
            cnt++;
            if(i!=n/i)  cnt++;
        }
    return cnt;
}


int main()
{
    //sieve of erotosthemes 😊
    int n;cin>>n;
    vi prime(n+1, 1);
    prime[1] = 0;

    for (int i = 2; i <= n; i++)
    {
        if(!prime[i]) continue;
        for (int k = 2*i; k <= n; k++)
        {
            prime[k]=0;
        }
        
    }
    


    
}