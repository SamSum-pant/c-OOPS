#include<iostream>
using namespace std;
class height{
    int meter;
    int centimeter;
    public:
    height (int m=0, int cm=0){
        meter=m;
        centimeter=cm;
    }
    friend height operator +(const height&h1, const height&h2 );
    void display() const{
        cout<<meter<<"meters"<<centimeter<<"centimeter"<<endl;
    }

};
height operator +(const height&h1 , const height&h2){
    int totalmeter=h1.meter + h2.meter;
    int totalcentimeter=h1.centimeter + h2.centimeter;

    if(totalcentimeter >=100){
        totalmeter+=totalcentimeter/100;
        totalcentimeter=totalcentimeter%100;
    }
    return height(totalmeter, totalcentimeter);
}
int main(){
    height h1(2,80);
    height h2(3,35);
    height h3=h1+h2;
    cout<<"Height 1:";
    h1.display();
    cout<<"Height 2:";
    h2.display();
    cout<<"Sum of Height:";
    h3.display();
    return 0;
}