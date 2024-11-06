#include<iostream>
using namespace std;
class person {
    int age;
    double salary;
    public:
    person(int a, double b){
        age=a;
        salary=b;
    }
    void displaypersoninfo(){
        cout<<"Age:"<<age<<endl<<"Salary:"<<salary<<endl;
    }
};

class student:public person{
    int sid;
    float CGPA;
    public:
    student(int a,double b,int s, float C):person(a,b),sid(s),CGPA(C){}
    void displaystudentinfo(){
        displaypersoninfo();
        cout<<"Student ID:"<<sid<<endl<<"CGPA :"<<CGPA<<endl;
    }
};

class doctor:public person{
    int did;
    string h_name;
    public:
    doctor(int a,double b,int d, string h):person(a,b),did(d),h_name(h){}
    void displaydoctorinfo(){
        displaypersoninfo();
        cout<<"DOctor ID:"<<did<<endl<<"Hospital Name: "<<h_name<<endl;
    }
};

class cleark:public person{
    public:
    cleark(int a,double b):person(a,b){}

    void displayclearkinfo(){
        displaypersoninfo();
    }
};

int main(){
    student s1(12,12000.21,47,8.5);
    doctor d1(41,1500000.23,56,"MANTRA");
    cleark c1(55,15000);
    s1.displaystudentinfo();
    d1.displaydoctorinfo();
    c1.displayclearkinfo();


    return 0;
}