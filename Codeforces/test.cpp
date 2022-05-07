#include<bits/stdc++.h>
using namespace std;

int main()
{
    int size;
    cin>>size;
    int a[size];
    for (int k = 0; k < size; k++)
    {
        cin>>a[k];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = size-1; j > i; j++)
        {
            if(a[i]>a[j]){
                if(a[i] < 0 && a[j] >0){
                    a[i]*=-1;
                    a[j]*=-1;
                }
            }
        }
    }
    


    
   for (int i = 0; i < size; i++)
   {
       cout << a[i] <<" ";
   }
   
    
    
}