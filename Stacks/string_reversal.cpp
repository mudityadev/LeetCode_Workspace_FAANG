#include<bits/stdc++.h>
using namespace std;

void reversal(string n){
    stack<char> S;
    cout << "Before : "<< n << " ";    
    // * loop for push
    for (int i = 0; i < n.size(); i++)
    {
        S.push(n[i]);
    }
    // * loop for pop
    for (int i = 0; i < n.size(); i++)
    {
        n[i] = S.top();
        S.pop();
    }
    cout << endl;
    cout << "After : "<< n << " ";    
}


int main()
{
    string name = "muditya";
    reversal(name);   
}