#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int case_number=1;
    while(t--){
       int n;
       cin>>n;
       string oldpass;
       cin>>oldpass;
       bool uppchar=false;
       bool lowchar=false;
       bool digt=false;
       bool seven_char=false;
       bool spchar=false;
       for(int i=0;i<n;i++){
           char temp=oldpass[i];
           if(temp>='0' && temp<='9')
           digt=true;
           if(temp>='a' && temp<='z')
           lowchar=true;
           if(temp>='A' && temp<='Z')
           uppchar=true;
           if(temp=='#' || temp=='@' || temp=='*' || temp=='&')
           spchar=true;
       }
       if(!spchar)
       oldpass.push_back('#');
       if(!digt)
       oldpass.push_back('1');
       if(!uppchar)
       oldpass.push_back('A');
       if(!lowchar)
       oldpass.push_back('z');
       while(oldpass.size()<7)
       oldpass.push_back('1');
       cout<<"Case #"<<case_number<<": "<<oldpass<<endl;
       case_number++;
    }
    return 0;
}