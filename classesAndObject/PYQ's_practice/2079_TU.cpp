#include<iostream>
using namespace std;
class staff{
    int code;
    string name;
    public:
    staff(int c,string n){
        code=c;
        name=n;
    }
    void displaystaffinfo(){
        cout<<endl<<"Code:"<<code<<endl;
        cout<<"Name:"<<name<<endl;
    }
};
class teacher:public staff{


    string subject;
    double salary;
    public:
    teacher(int c,string n,string sub ,double sa):staff(c,n),subject(sub),salary(sa){}
   
   void displayteacherinfo(){
    displaystaffinfo();
    cout<<"subject:"<<subject<<endl;
    cout<<"salary:"<<salary<<endl;

   }

};

class typist:public staff{
    
    int speed;
    public:
    typist(int c,string n,int s):staff(c,n),speed(s){}
   

   void displaytypistinfo(){
    displaystaffinfo();
    cout<<"Speed:"<<speed<<"per minutes"<<endl;
   }
};
int main()
{
    staff s1(101,"Tony Stack");
    s1.displaystaffinfo();

    teacher  t1(104,"Tanmay bhatt","Marketing",50000);
    t1.displayteacherinfo();

    typist w1(110,"Samay raina",75);
    w1.displaytypistinfo();

    return 0;
}