#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;

int main()
{
    // * take count the max value from vector
    int max = *max_element(candies.begin(), candies.end());

    // * count spaces
    countSpaces = count(str.begin(), str.end(), ' ');

    // * XOR operation
    cout << (2 ^ 0) << " ";

    // * map<int, char> 
    map<int, char> m;
    // * key = m.first
    // * value = m.second

    // * merge to vectors
    for(int i=0;i<n;i++)nums1[m+i]=nums2[i];

    // * in-place 
    last_value = nums.size()-1; // * last element access

    //* type of map = unordered_map<int, string> and map<int,int>
    unordered_map<int, int> m;
    m[1] = 12; // * m[1] is a key and 12 is a value
    m[1]++; // * 13 inc
    cout << m[1]; // * 13 output

    //* make a map
    string s = "deeedbbcccbdaa";
    //* input in map
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]]++;   
    }
    //* run a map
    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl; 
    }

    //* convert any string to a number
    cout << '7' - '0' << " "; // converting 7 in char to int by - '0'
    
     unordered_set<int> m(nums1.begin(), nums1.end());

    // * increase the speed for IO
    cin.tie(0);
    ios_base::sync_with_stdio(false);

    int pow = (int) Math.pow(10, k);
}