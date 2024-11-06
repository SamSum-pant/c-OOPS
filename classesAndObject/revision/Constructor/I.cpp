#include<iostream>
using namespace std;
class student{
    string name;
    int age,roll_number;
    string grade;
    public:
    void setname(string s){
        name=s;
    }
     void setage(string a){
        age=a;
    }
     void setroll(string r){
        roll_number=r;
    }
     void setgrade(string g){
        grade=g;
    }
    void getname(){
        cout<<name<<endl;
    }
     void getage(){
        cout<<age<<endl;
    }
     void getroll(){
        cout<<roll_number<<endl;
    }
     void getgrade(){
       cout<<grade<<endl;
    }
    


};
int main()
{
    student s1;
    s1.setname("SAM");
    s1.age(19);
    s1.setroll(41);
    s1.setgrade("A+");
    s1.getname();
    s1.getage();
    s1.getroll();
    s1.getgrade();
    return 0;
}