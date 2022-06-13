#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
double callTax(int x, int per){
        return ((per/100)*x);
    }
    
double calculateTax(vector<vector<int>>& b, int income) {
    double calTax;
    vector<double> sumTax;
    
    calTax = callTax(b[0][0],b[0][1]);
    sumTax.push_back(calTax);
    calTax = 0;
    for(int i=1;i<b.size();i++){
        for(int j=0;b[0].size();j++){
            calTax = callTax((b[i][j]-b[i-1][j]), b[i][j+1]);
            cout << calTax << "\n";
            sumTax.push_back(calTax);
            calTax = 0;

        }
    }
    
    for(double x : sumTax){
        
        calTax+=x;
    }
    
    return calTax;
}
int main()
{
    vector<vector<int>> v = {
        {3,50},
        {7,10},
        {12,25},
    };

    int income  = 10;

    cout << calculateTax(v,income);

}