#include<bits/stdc++.h>
using namespace std;
class stdu
{
public:
    int roll;
private:
    string name;
public:
    void setname(string name)
    {
        name=name;
        cout<<name;
    }
};
int main()
{
    stdu s;
    s.roll=12;
    string a="helli";
    s.setname(a);
    return 0;
}
