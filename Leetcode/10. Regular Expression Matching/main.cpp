#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


bool isMatch(string s, string p) {
    int m = s.size();
    int n = p.size();
    vector<vector<bool>> dp(m+1, vector<bool>(n+1, false));

    for (int i = 0; i < dp.size(); i++)
    {
        for (int j = 0; j < dp[0].size(); j++)
        {
            if(i == 0 && j == 0){
                dp[0][0] = true;
            }else if(i == 0){
                dp[i][j] = false;
            }else if(j == 0){
                char pc = p[i-1];
                if(pc == '*'){
                    dp[i][j] = dp[i-2][j];
                }else{
                    dp[i][j] == false;
                }
            } else {
                char pc = p[i-1];
                char sc = s[j-1];

                if(pc == '*'){
                    dp[i][j] = dp[i-2][j];

                    char plsc = p[i-2];
                    if(plsc == '.' || plsc == sc){
                       dp[i][j] = dp[i][j] || dp[i][j-1];
                    }

                } else if(pc == '.'){
                    dp[i][j] = dp[i-1][j-1];
                } else if(pc == sc){
                    dp[i][j] = dp[i-1][j-1];
                } else{
                    dp[i][j] = false;
                }
            }
        }
        
    }
    
    return dp[m][n];
    

}


int main()
{
  string s;
  string p;
  cin>>s>>p;
  if(isMatch(s,p)){
      cout <<"TRUE" << endl;
  } else{
      cout <<"NO" << endl;
  }
}