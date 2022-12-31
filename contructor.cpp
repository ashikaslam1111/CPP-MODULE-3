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
    stud()
    {}
};
int main()
{
    stud s(12,"aslam");
    cout<<s.name;
    stud s2;
    return 0;
}
