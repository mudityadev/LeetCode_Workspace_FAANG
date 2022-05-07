#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
    int team1, team2;
    cin>>team1>>team2;
    if(team1 <=0 || team2<= 0){
        cout << "NO" << endl;
    }
    else if(team1==team2 || team1>team2 || team2>team1){
        cout << "YES" << endl;
    } 
}}