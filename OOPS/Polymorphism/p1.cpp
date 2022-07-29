#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

class Pattern{
public:
    void pattern1(int n){
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout <<"\n";   
    }
    }

    void pattern2(int n){
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << "* ";
        }
        cout <<"\n";   
    }
    }

    void pattern3(int n){
        for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout << "* ";
        }
        cout <<"\n";   
    }
    }

     void pattern4(int n){
            int x = 1;
        for (int i = 1; i <= n; i++)
    {
        // x = 1;  
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout <<"\n";   
    }
    }
};


int main()
{
    Pattern p;
    // p.pattern2(5);
    p.pattern4(5);
    // p.pattern3(5);
    // p.pattern1(5);
    
}