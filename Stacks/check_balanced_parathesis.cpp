// * not working - 22-04-2022

#include<bits/stdc++.h>
using namespace std;

bool checkBP(string s){
    int n = s.size();
    stack<char> M;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
            M.push(s[i]);
        }
        else if(s[i] == ')' ||  s[i] == '}' || s[i] == ']')
        {
            if(M.empty() || M.top() != s[i]){
                return false;
            }
            else 
                M.pop();  
        }
    }

    return M.empty() ? true:false;
    
}


int main()
{
    string m = "{[]}";
    cout << checkBP(m) << " ";
}