#include<bits/stdc++.h>
using namespace std;
class info
{
public:
    string name;
    info *father,*mother;
    void pri()
    {
        cout<<name<<" "<<mother->name<<" "<<father->name;

    }
};
int main()
{
    info s;
    s.father=new info;
    s.mother=new info;
    s.name="aslam";
    s.father->name="jamil";
    s.mother->name="anna";
    s.pri();
    return 0;
}

