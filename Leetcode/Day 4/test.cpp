#include<bits/stdc++.h>
using namespace std;
int sumOddLengthSubarrays(vector<int>& arr) {
        int sum{0};
        int n = arr.size(); // 5
        int m = 1;
        for (int i = 0; i < n ; i++)
        {
            sum+=arr[i];
        }
        if(n%2 == 0) return sum;
        
        for (int i = 0; i < n; i+=2)
        {
            /* code */
        }
        

        
    }
int main()
{
    vector<int> v{1,4,2,5,3};

    cout << sumOddLengthSubarrays(v) << " ";
}