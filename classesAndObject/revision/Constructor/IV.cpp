#include<iostream>
using namespace std;
class wall{
     double* length;
    public:
   
    wall( double l){
        length= new double;
        *length =l;
        


    }
    void display() const{
        cout<<"Length:" << *length << endl;
    }
};
int main(){
    wall w1(22.2);
     wall w2(w1);
    
    w1.display();
    w2.display();
    return 0;

}