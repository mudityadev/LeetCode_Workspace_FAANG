#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int main()
{
    vector<string> mess = {"Hello userTwooo","Hi userThree","Wonderful day Alice","Nice day userThree"};
    vector<string> send = {"Alice","userTwo","userThree","Alice"};

    // vector<string> mess = {"How is leetcode for everyone","Leetcode is useful for practice"};
    // vector<string> send = {"Bob","Charlie"};


    vector<pair<string, int>> aaa;
    pair<string, int> pp;
    vector<int> mes;
    unordered_map<string, int> mp;
    for (int i = 0; i < mess.size(); i++)
    {
        int countSpaces=0;
        countSpaces = count(mess[i].begin(), mess[i].end(), ' ');
        mes.push_back(countSpaces+1);
        mp[send[i]] += countSpaces+1;
        
        pp = make_pair(, countSpaces+1);
        aaa.push_back(pp);
    }
    string ans;
    int maxo=0;
    vector<string> ass;
    int maxi = 0;
    for(auto x : mp){
        // cout << x.first << " " << x.second << " ";
        if(maxi < x.second){
            ans = x.first;
            maxi = x.second;
           
        }
    }

    sort(ass.begin(), ass.end());
    sort(aaa.begin(), aaa.end());
    
    for(auto x : aaa){
        cout << x.first << " " << x.second << "\n";
    }
    // cout << aaa.back();
    
    // return ass.back();
    // return ans;




}