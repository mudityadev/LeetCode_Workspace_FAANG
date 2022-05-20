#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

// void myAtoi(string s) {
int myAtoi(string s) {
    int ans=0;
    int res=0;
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '0' || s[i] == '1' || s[i] == '2' || s[i] == '3' ||s[i] == '4' || s[i] == '5' ||s[i] == '6' || s[i] == '7' || s[i] == '8' || s[i] == '9'){
            res = (s[i]-'0');
            ans = (ans*10) + res;
        }else if(s[i] == '-'){
            flag = 1;
        }
    }
    
    if(flag){
        return -1*ans;
    // cout << -1*ans << endl;
    }else{
        return ans;
    // cout << ans << endl;
    }



}

int main()
{
    string s;
    cin>>s;
    // cout << myAtoi(s) << endl;
    myAtoi(s);
    
}