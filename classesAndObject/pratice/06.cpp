#include<iostream>
using namespace std;
class customer {
string name;
int account_number;
int balance;

public:
customer(string name , int account_number , int balance){
   this->name=name;
   this ->account_number =account_number;
   this->balance =balance;
}
void display(){
    cout<<name<<" "<<account_number<<" "<<balance<<" "<<endl;

}

};
int main()
{
    customer A1("SAm",125,111111);
    A1.display();

    return 0;
}