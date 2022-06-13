#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>


int minimumTotal(vector<vector<int>>& triangle) {
    int miniTotal = 0;
    miniTotal += triangle[0][0];
    cout << miniTotal << "\n";
    if(triangle.size()==1 && triangle[0].size()==1) return miniTotal;
    
    for(int i=1;i<triangle.size();i++){
        for(int j=0;j<triangle[i].size();j++){
           miniTotal += min(triangle[i][j],triangle[i][j+1]);
           break;
        }
    }
    // if(miniTotal<1) return 0;
    return miniTotal;
}

int main()
{
    vector<vector<int>> t = {
        {-1},{2,3},{1,-1,-3}
    };

    cout << "\nans = " <<minimumTotal(t) << " ";

    
}