#include<bits/stdc++.h>
using namespace std;
class stud
{
public:
    string name;
    int roll;
    stud()
    {

    }
    stud(int n,string na)
    {
        name=na;
        roll=n;
    }
    void sho()
    {
        cout<<name<<" "<<roll<<"\n";
    }
};
bool comp(stud a,stud b)
{
    return a.roll<b.roll;
}
int main()
{
    vector <stud>a;
    for(int i=0; i<10; i++)
    {
        a.push_back(stud(20-i,"A"));
    }
    sort(a.begin(),a.end(),comp);


    for(int i=0; i<10; i++)
    {
        a[i].sho();
    }
    return 0;
}
