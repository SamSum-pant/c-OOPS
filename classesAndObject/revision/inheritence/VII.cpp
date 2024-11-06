#include<iostream>
#include<string>

// EXAmple of MULTIPLE INHERITANCE

using namespace std;
class student{
    public:
    string name;
    int roll_no;
};
class teacher{
    public:
    string Subject;
    double Salary;
};
class TA:public student ,public teacher{
    public:
    string research_area;

};
int main(){
    TA D1;
    D1.name="BALRAJ";
    D1.research_area="CRIMINAL PSYCHOLOGY";
    D1.roll_no=52123;
    D1.Subject="PSYCHOLOGY";
    D1.Salary=120000;
    cout<<"Name: "<<D1.name<<endl;
    cout<<"Research Area: "<<D1.research_area<<endl;
    cout<<"Roll_no: "<<D1.roll_no<<endl;
    cout<<"Subject: "<<D1.Subject<<endl;
    cout<<"Salary: "<<D1.Salary<<endl;
    return 0;
}