#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<ll>

int percentageLetter(string s, char letter) {
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if(letter == s[i]){
                count++;
            }
        }
        int pre;
        cout << count << endl;
        if(count == 0){
            return 0;
        }else{
            pre = (count*100/s.length());
            return pre;
        }
}


int maximumBags(vector<int>& capacity, vector<int>& rocks, int addRocks) {
      vector<int> res;
        for(int i=0;i<capacity.size();i++){
            res.push_back(capacity[i] - rocks[i]);
        }
        for(auto x:res){
            cout << x << " ";
        }
        
        sort(res.begin(), res.end());
        int count=0;
        for(int i=0;i<res.size();i++){
            if(res[i] <= addRocks){
                count++;
                addRocks -= res[i];
            }else{
                break;
            }
        }

        
        return count;

}
int main()
{
//     [91,54,63,99,24,45,78]
// [35,32,45,98,6,1,25]
// 17
    int x;
    
    // vector<int> ca = {54,18,91,49,51,45,58,54,47,91,90,20,85,20,90,49,10,84,59,29,40,9,100,1,64,71,30,46,91};
    // vector<int> ro = {14,13,16,44,8,20,51,15,46,76,51,20,77,13,14,35,6,34,34,13,3,8,1,1,61,5,2,15,18};
    // int ar = 77;

    vector<int> ca = {2,3,4,5};
    vector<int> ro = {1,2,4,4};
    int ar = 2;

    cout << "result " << maximumBags(ca,ro,ar) << "\n"; 

}