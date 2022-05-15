#include<bits/stdc++.h>
using namespace std;


int maxConsecutive(int bottom, int top, vector<int>& special) {
    int ans=0;
    vector<int> ve;
    int i = bottom;
    while(i<=top){
        ve.push_back(i);
        i++;
    }

    for(auto x:ve){
        cout << x << " ";
    }
}  

int main()
{
    int bottom = 2, top = 9;
    vector<int> sp = {4,6};
    cout << maxConsecutive << " ";
}