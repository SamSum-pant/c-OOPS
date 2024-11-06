#include<iostream>
using namespace std;
class height{
    public:
    int meter;
    int centimeter;
    
    height(int m=0, int c=0){
        meter=m;
        centimeter=c;
    }

    friend height operator +(const height&h1, const height&h2);
        void display() const {
              cout<<meter<<"meters"<<centimeter<<"centimeters"<<endl;

        }
      
    

};

height operator +(const height&h1, const height&h2){
int totalmeter=h1.meter+h2.meter;
int totalcentimeter=h1.centimeter+h2.centimeter;

if(totalcentimeter>=100){
    totalmeter+=totalcentimeter/100;
    totalcentimeter=totalcentimeter%100;
}
return height(totalmeter,totalcentimeter);

};

int main()
{
    height h1(4,55);
    height h2(1,85);
    height h3=h1+h2;
    cout<<"height 1:"<<endl;
    h1.display();
    cout <<"height 2"<<endl;
    h2.display();
    cout<<"sum of height"<<endl;
    h3.display();

    return 0;

}