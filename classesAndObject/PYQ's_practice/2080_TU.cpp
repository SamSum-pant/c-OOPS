#include<iostream>
using namespace std;
class person{
    int age;
    double salary;
    public:
    person(int a, double b):age(a),salary(b){}

    void displaypersoninfo(){
        cout<<"Age:"<<age<<endl<<"SAlary:"<<salary<<endl;
    }
};

class student:public person{
    int sid;
    float CGPA;
    public:
    student(int a , double b, int s, float c):person(a,b),sid(s),CGPA(c){}

    void diplaystudentinfo(){
        displaypersoninfo();
        cout<<"Studenr ID:"<<sid<<endl<<"CGPA:"<<CGPA<<endl;
    }
};


class Doctor:public person{
    int did;
    string h_name;
    public:
    Doctor(int a , double b, int d, string h):person(a,b),did(d),h_name(h){}

    void diplaydoctorinfo(){
        displaypersoninfo();
        cout<<"Doctor  ID:"<<did<<endl<<"Head NAme:"<<h_name<<endl;
    }
};

class Clerk{
    int age;
    double salary;
    public:
    Clerk(int a, double b):age(a),salary(b){}

    void displayClerkinfo(){
        cout<<"Age:"<<age<<endl<<"SAlary:"<<salary<<endl;
    }
};



int main()
{
    student s1(21,12000.12,101,9.5);
    s1.diplaystudentinfo();
    Doctor d1(21,45000.21,512,"kenny");
    d1.diplaydoctorinfo();
    Clerk c1(30,15000.32);
    c1.displayClerkinfo();



    return 0;
}