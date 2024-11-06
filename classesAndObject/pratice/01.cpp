#include<iostream>
#include<string>
using namespace std;
class teacher{
    private:
    double salary;
   public:

    //properties / attributes
    string name;
    string dept;
    string subject;
    
//methods/ member function
void changeDept(string newDept){
    dept = newDept;
}
void setSalary(double s){
    salary=s;
}
void getSalary(){
    return salary;
}

};

int main(){
teacher t1;
t1.name="SAm";
t1.dept="IT";
t1.subject="Computer science";
t1.setSalary(25000);

cout<<t1.name<<endl;
cout<<t1.dept<<endl;
cout<<t1.subject<<endl;
cout<<t1.getSalary()<<endl;



    return 0;
}