#include<iostream>
using namespace std;

class STUDENT{
    public:
    string name;
    int age,roll_number;
    string grade;


};



int main()
{
STUDENT *s = new STUDENT;
(*s).name="SAm";
(*s).age=19;
(*s).roll_number=47;
(*s).grade="A+";
cout<<s->name<<" \n ";
cout<<s->age<<"\n ";
cout<<s->roll_number<<"\n ";
cout<<s->grade<<"\n ";


    return 0;
}