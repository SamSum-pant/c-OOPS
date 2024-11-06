#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    public:
    time(int h=0,int m=0){
        hour=h;
        minute=m;
    }
    friend time operator +(const time&t1,const time&t2);

    void display()const{
            cout<<hour<<"hour"<<minute<<"minute"<<endl;


    }


};
time operator +(const time&t1,const time&t2){
    
       int totalhour=t1.hour+t2.hour;
       int totalminute=t2.minute+t2.minute;
        if(totalminute>=60){
            totalhour+= totalminute/60;
            totalminute= totalminute%60;
        }
        return time(totalhour,totalminute);
}

int main(){
    time t1(4,25);
    time t2(1,45);
    time t3=t1+t2;
    cout<<"Time 1:";
    t1.display();
    cout<<"Time 2:";
    t2.display();
    cout<<"SUM T1 + T2 :";
    t3.display();
    return 0;
}
