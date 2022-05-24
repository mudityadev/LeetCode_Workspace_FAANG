#include<iostream>
#include<vector>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    vector<int> a;
    vi b;
    int n,k;
    cin>>n>>k;
    int x;
    int maxi=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        a.push_back(x);
    }


    for (int i = 0; i < k; i++)
    {
        cin>>x;
        b.push_back(x);
    }

    for (int i = 0; i < n; i++)
    {
        if(a[i] > a[i+1]){
            maxi = i;
        }
    }

    for (int i = 0; i < k; i++)
    {
        if(b[i] == maxi){
            cout << "YES" << endl;
            // return;
            break;
        }
        else{
            cout << "NO" << endl;
            // return;
            break;
        }
    }
    
    

    
    



}