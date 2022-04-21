#include<bits/stdc++.h>
using namespace std;

class Student{
    private:
        string name;
        string roll;
        int ph,ch,comp;
        double avg;
    public:
    
    void getname(string name1, string roll){
        this->name = name1;
        this->roll = roll;
    }
    
};

int main()
{
    Student s;
    s.getname("manu");

}