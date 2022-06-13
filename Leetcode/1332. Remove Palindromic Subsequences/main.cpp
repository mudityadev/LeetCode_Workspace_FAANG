// 1332. Remove Palindromic Subsequences

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

string interpret(string command) {
    string ans="";
    for (int i = 0; i < command.length(); i++)
    {
        if(command[i] == 'G'){
            ans += "G";
        } else if(command[i] == '(' && command[i+1] == ')'){
            ans+= "o";
            i++;
        }
        else if(command[i] == '(' && command[i+1] == 'a'){
            ans+="al";
            i = i+3;
        }
    }
    return ans;
}


int main()
{
    string command;
    cin>>command;
    cout << interpret(command) << " ";
}
