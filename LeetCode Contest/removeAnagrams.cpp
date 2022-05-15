#include<bits/stdc++.h>
using namespace std;


void removeAnagrams(vector<string>& words) {
    vector<string> manu{words.begin(), words.end()};
    vector<string> ans;
    unordered_set<string> ss;

    for (int i = 1; i <= words.size(); i++)
    {
        sort(begin(words[i-1]), end(words[i-1]));
        sort(begin(words[i]), end(words[i]));
        if(words[i-1] == words[i]){
            if(ss.find(words[i-1])==ss.end()){
                ss.insert(words[i-1]);
                ans.push_back(manu[i-1]);
            }
        } else if(ss.find(words[i-1])==ss.end()){
            ss.insert(words[i-1]);
            ans.push_back(manu[i-1]);
        }
        
    }
    
    for(auto x : ans){
        cout << x << " ";
    }

}   



int main()
{
    vector<string> v = {"abba","baba","bbaa","cd","cd"};
    removeAnagrams(v);
}