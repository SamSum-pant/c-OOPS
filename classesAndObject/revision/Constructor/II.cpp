#include<iostream>
#include<string>
using namespace std;
class Customer {
    string name;
    int customer_ID;
    double balance;
    public:

Customer(){ // NON-parametarized constructor
    name="Naveed Richard";
    customer_ID=8520;
    balance=1000.23;

}
Customer(string v,int z){ // constructor overloading
    name=v;
    customer_ID=z;
    balance=120000.12;
}

Customer(string q , int r , double s):name(q),customer_ID(r),balance(s){

} // inline constructor

void display(){
    cout<<name<<" "<< customer_ID<< " " << balance<<endl;
}

// copy constructor
Customer(Customer &b){
    name=b.name;
    customer_ID=b.customer_ID;
    balance=b.balance;
}
    

};
int main()
{
    Customer s1("SAM",5555,80000.23);
    Customer s2;
    Customer s3("Kannan",5552);
    Customer s4("Samay raina",2356,5214.12);
    Customer s5(s4); 
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    s5.display();

    

    return 0;
}
