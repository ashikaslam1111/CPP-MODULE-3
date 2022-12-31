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
    bool operator <(stud a)
    {
        return roll<a.roll;
    }
};
int main()
{
    vector <stud>a;
    for(int i=0; i<10; i++)
    {
        a.push_back(stud(20-i,"A"));
    }
    sort(a.begin(),a.end());

    for(int i=0; i<10; i++)
    {
        a[i].sho();
    }
    return 0;
}
