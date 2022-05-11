#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
    

    int n;
    cin>>n;
    vector<int> candies(n);
    for (int i = 0; i < n; i++)
    {
        cin>>candies[i];
    }
    int mini = *min_element(candies.begin(), candies.end());
    int sum = 0;
    for (int i = 0; i < candies.size(); i++)
    {
        if(mini == candies[i]){
            sum+=0;
        }
        sum = sum + (candies[i] - mini);
    }
    
    cout << sum <<endl;
    }
}