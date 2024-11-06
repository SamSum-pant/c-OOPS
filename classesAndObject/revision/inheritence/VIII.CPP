#include<iostream>
using namespace std;

// Example OF HIEARCHIAL INHERITANCE

class person{
    public:
    string name;
    int age;
};
class student: public person  {
    public:
    int Roll_no;

};
class teacher:public person{
    public:
    string Subject;
};
int main()
{
    student S1;
 S1.name="SUman pant";
 S1.age=20;
 S1.Roll_no=47;
 cout<<S1.name<<endl<<S1.age<<endl<<S1.Roll_no<<endl;

 teacher T1;
 T1.name="Keshav bhatt";
 T1.age=40;
 T1.Subject="OOPS";
 cout<<endl<<T1.name<<endl<<T1.age<<endl<<T1.Subject<<endl;
 

    return 0;
}