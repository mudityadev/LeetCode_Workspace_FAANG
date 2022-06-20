#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int bottomUpLCS(string text1,string text2, int n, int m){
    // define 😊
    vector<vector<int>> t(n+1, vector<int>(m+1));
    // initialization -> base condition 🤪 by 0
    for(int i=0;i<n+1;i++) t[i][0] = 0;
    for(int i=0;i<m+1;i++) t[0][i] = 0;

    for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < m+1; j++)
        {
            // choice diagram
            // if we include
            if(text1[i-1] == text2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }else{
                t[i][j] = max(t[i-1][j], t[i][j-1]);
            }
        }
        
    }
    return t[n][m];    
}


int main()
{
    string text1, text2;
    cin>>text1>>text2;

    cout << "ans = " << bottomUpLCS(text1, text2, text1.length(), text2.length());



}