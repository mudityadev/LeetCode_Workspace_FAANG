#include<bits/stdc++.h>
using namespace std;


int orangesRotting(vector<vector<int>>& num) {
        int count = 0;

        cout << "Before 1min " << endl;
        for(auto aa : num){
            for(auto a : aa){
                cout << a << " ";
            }
            cout << endl;
        }  
        cout << endl;

        for (int i = 0; i < num.size(); i++)
        {
            for (int j = 0; j < num[i].size(); j++)
            {
                if(num[i][j] == 0) {break;}
                if(num[i][j] == 2){
                    int flag = 0;
                    if(num[i+1][j] == 1){
                        cout << "\n [INFO num[i+1][j]] i = " << i+1 << " j = " << j << endl;
                        num[i+1][j] = 2;
                        flag++;
                    }
                    if(num[i][j+1] == 1){
                        cout << "\n [INFO num[i][j+1]] i = " << i << " j = " << j+1 << endl;
                        num[i][j+1] = 2;
                        flag++;
                    }
                    if(flag) count++;
                }
            }
        }


        cout << " After 1 min " << endl;
        for(auto aa : num){
            for(auto a : aa){
                cout << a << " ";
            }
            cout << endl;
        }
        return count;
}


int main()
{
    vector<vector<int>> grid = {
        {2,1,1},
        {1,1,0},
        {0,1,1}

        // {2,1,1},
        // {0,1,1},
        // {1,0,1}
    };

    cout << orangesRotting(grid) << " ";
}