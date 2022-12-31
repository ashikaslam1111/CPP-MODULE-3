#include<bits/stdc++.h>
using namespace std;
class student
{
public:
    string name;
    int id;
    int age;
    string papaName,motherName;
    void pri()
    {
        cout<<id;

    }
};
int main()
{
    student s;
    s.name="aslam";
    s.id=12;
    s.pri();
    return 0;
}
