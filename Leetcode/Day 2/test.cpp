#include<bits/stdc++.h>
using namespace std;

string restoreString(string s, vector<int>& indices) {
        map<int, char> m;
        for(int i = 0;i< indices.size(); i++){
            m[indices[0]] = s[i];
        }

        string ans; 

        for(int i = 0;i < indices.size();i++){
            ans[i] = m[i];
        }
        
        cout << ans;
        return ans;

        
    }

int main()
{
    string s = "codeleet";
    vector<int> in = {4,5,6,7,0,2,1,3};

    cout << restoreString(s, in) << " ";

  
}