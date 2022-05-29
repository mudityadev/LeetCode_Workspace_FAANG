#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int rearrangeCharacters(string s, string target) {
    int count = 0;
    map<char, int> mp;
    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if(mp[target[i]] < 0){
            count = 1;
        }else{
            count = 0;
        }
    }
    
  
   
    cout << "\n";
    for(auto x : mp){
        cout << x.first << " = " << x.second << "\n";
    }

    return count;
}


int main()
{
    string s;
    string target;
    cin>>s>>target;
    cout << "ans = " << rearrangeCharacters(s, target) << " ";   
}