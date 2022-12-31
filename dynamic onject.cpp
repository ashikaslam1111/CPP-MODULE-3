#include<bits/stdc++.h>
using namespace std;
class stud
{
public:
    int roll;
    string name;
    stud(int roll,string n)
    {
        name=n;
        this->roll=roll;
    }
    void sho()
    {
        cout<<name<<" "<<roll;
    }
};
int main()
{
    stud* s=new stud(12,"aslam");
    s->sho();
    cout<<"\n";
    (*s).sho();
    return 0;
}
