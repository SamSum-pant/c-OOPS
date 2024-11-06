#include<iostream>
using namespace std;
class height{
    int meter;
    int centimeter;
    public:
    height(int m=0, int cm=0){
        meter=m;
        centimeter=cm;
    }
    friend height operator +(const height&h1 , const height&h2);

    void display()const{
        cout<<meter<<"meters"<<centimeter<<"centimeters"<<endl;
    }

};
 height operator +(const height&h1 , const height&h2){
   int totalmeter=h1.meter+h2.meter;
   int totacentimeter=h1.centimeter+h2.centimeter;
   if(totacentimeter>=100){
    totalmeter+=totacentimeter/100;
    totacentimeter=totacentimeter%100;
   }
   return height(totalmeter,totacentimeter);
 }
int main()
{
    height h1(5,35);
    height h2(1,85);
    height h3=h1+h2;
    cout<<"Height 1:";
    h1.display(); 
    cout<<"Height 2:";
    h2.display();
    cout<<"Sum of Heights: ";
    h3.display();
    
    


    return 0;
}