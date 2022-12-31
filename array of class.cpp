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
int main()
{
    stud a[10];
    for(int i=0; i<10; i++)
    {
        a[i]= stud(i,"A");
    }
    for(int i=0; i<10; i++)
    {
        a[i].sho();
    }
    return 0;
}
