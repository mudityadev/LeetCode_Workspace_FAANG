#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>
#include <vector>
using namespace std;


void PrintVec(vector<int> v){
    for(auto x : v){
        cout << x << " ";
    }
    cout << endl;
}


void twoNumberSum(vector<int> array, int targetSum) {
  vector<int> ans;
  map<int,int> mp;
  int n = array.size();
  for(int i=0;i<n;i++){
    mp[i] = array[i];
  }

  for(int i=0;i<n;i++){
    if(mp.find(targetSum-array[i])!=mp.end()){
        ans.push_back(array[i]);
        ans.push_back(targetSum-array[i]);
    }
  }

    PrintVec(ans);
}



int main()
{
    vector<int> v{3,5,-4,8,11,1,-1,6};
    int target = 10;
    twoNumberSum(v, target);

}