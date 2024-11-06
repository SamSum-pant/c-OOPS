#include<iostream>
#include<string>
using namespace std;
// Multi Level Inheritance EXAMPLE
class person{
    public:
    string name;
    int Age;
};
class student:public person{
    public:
    int roll_no;
};
class GradStudent:public student{
    public:
    string Research_Topic;
};
int main()
{
GradStudent S1;
S1.name="Kanan Gill";
S1.Age=42;
S1.roll_no=5241;
S1.Research_Topic="Marketing";
cout<<"NAme: "<<S1.name<<endl;
cout<<"Age: "<<S1.Age<<endl;
cout<<"Roll Number: "<<S1.roll_no<<endl;
cout<<"Research Topic: "<<S1.Research_Topic<<endl;

    return 0;
}