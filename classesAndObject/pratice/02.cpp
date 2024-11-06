#include<iostream>
#include<string.h>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    int age;
};
int main()
{
    student s1;
    s1.name="Walter White";
    s1.rollno= 21;
    s1.age= 52;

    cout<<s1.name<<endl;
    cout<<s1.rollno<<endl;
    cout<<s1.age<<endl;
    return 0;
}