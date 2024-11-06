// EXAMPLE OF OPERATOR OVERLODING 
#include<iostream>
using namespace std;
class complex{
    public:
   int real;
   int img;
   complex(){

   }

   complex(int real,int img){
    this ->real=real;
    this ->img=img;
   }
   void display(){
    cout<<real<<"+i"<<img<<endl;

   }

   complex operator +(complex &c){
    complex ans;
    ans.real=real+c.real;
    ans.img=img+c.img;
    return ans;
   }


};
int main(){
    complex c1(3,4);
    complex c2(5,6);
    complex c3=c1+c2;
    c3.display();
}