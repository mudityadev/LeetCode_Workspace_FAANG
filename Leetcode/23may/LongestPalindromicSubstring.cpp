#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

bool isPal(string s){
    string temp = string(s.rbegin(), s.rend());
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!=temp[i]){
            return false;
        }
    }
    return true;
}

string longestPalindrome(string s) {
    vector<string> vs;
    string temp ="";

    if(s.size()<3){
        if(s.size()==1){
            return s;
        }else {
            if(isPal(s)){
                return s;
            }else{
                s.pop_back();
                return s;
            }
        }
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(!temp.empty()){
            temp.erase();
        }
        temp += s[i];
        for (int j = i+1; j < s.size(); j++)
        {
            temp += s[j];
            if(isPal(temp)){
                vs.push_back(temp);
            }
        }
    }

    string ans;
    int max = 0;
    for (int i = 0; i < vs.size(); i++)
    {
        if(vs[i].size()>max){
            ans = vs[i];
            max = vs[i].size();
        }
    }
    

    return ans;
    
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    

    string s;
    cin>>s;
    cout <<"ans = " << longestPalindrome(s) << "\n";    
}}