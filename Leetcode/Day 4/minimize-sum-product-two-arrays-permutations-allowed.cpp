#include<bits/stdc++.h>
using namespace std;


int miniSum(vector<int> &a, vector<int> &b){
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());
    int sum = 0;

    for (int i = 0; i < a.size(); i++)
    {
        sum+= a[i]*b[i];
    }

    return sum;
    

    
}


int main()
{
    vector<int> a{3,1,1};
    vector<int> b{6,5,4 };

    cout << miniSum(a,b) << " ";


}