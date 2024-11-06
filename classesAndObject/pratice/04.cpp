#include<iostream>
#include<string>
using namespace std ;
class customer{
    string name;
    int account_number;
    int balance;
   
    public:
// default constructor
    customer(){
        name="WAlter";
        account_number=5555;
        balance=10000;


    }
    // parametrized constructor
    customer(string a, int b, int c)
    {
        name=a;
        account_number=b;
        balance=c;

    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }
    

};
int main()
{
    customer A1("SAM",111,10000),A2;
    A1.display();
A2.display();

    
    
    return 0;
}
