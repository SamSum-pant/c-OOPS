#include<iostream>
using namespace std;
class customer{
    string name;
    int accout_number;
    double balance;

    public:
    // Default constructor
    customer(){
        name="Deepak";
        accout_number = 1254;
        balance=2500.12;
    }
// parametrized constructor
    customer(string a, int b, int c){
        name=a;
        accout_number=b;
        balance=c;
    }
    void display(){
        cout<<name<<" "<<accout_number<<" "<<balance<<endl;

    }

};
int main()
{
    customer A1("SAM",5555,80000.23),A2,A3;
    A1.display();
    A2.display();
    A3.display();

    return 0;
}