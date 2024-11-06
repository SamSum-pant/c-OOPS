#include<iostream>
using namespace std;
class customer{
    string name;
    double account_number;
    double balance;

    public:
    // inline constructor
    customer (string a,double b,double c): name(a), account_number(b), balance(c){


    }
    void display(){
        cout<<"name"<<" "<<account_number<<" "<<balance<<endl;
    }
};
int main()
{
    customer A1("sam",147,540);
    A1.display();

    return 0;
}