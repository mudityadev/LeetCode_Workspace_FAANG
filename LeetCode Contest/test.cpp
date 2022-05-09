#include<bits/stdc++.h>
using namespace std;

string largestGoodInteger(string num) {
    string res = "";
    unordered_map<char, int> mp;
    for (int i = 0; num[i]; i++)
    {
        if (mp.find(num[i]) == mp.end())
            mp.insert(make_pair(num[i], 1));
        else
            mp[num[i]]++;
    }

    for(auto x : mp){
        // 
        if(x.second == 3){
            for (int i = 0; i < 3; i++)
            {
                res+=x.first;
            }
            
        }
    }

    if (strstr(res.c_str(), num.c_str()))
    {
        return res;
    }else return "";
    

}


int main()
{

    // string s = "42352338";
    string s = "2300019";
    // string s = "6777133339";

    // not passed test cases
    // string s = "99921234324444";

    
    cout << largestGoodInteger(s) << " " << endl;
    
}