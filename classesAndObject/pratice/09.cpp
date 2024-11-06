#include<iostream>
using namespace std;
class building{
    int length;
    public:
    building ():length(25){} // default constructor
    building(int l):length(l){} // parametarized constructor
    building(const building &b):length(b.length){} // copy constructor
    void display(){
        cout<<"Length:"<<length<<endl;
    }

};
int main()
{
    building b1;
    b1.display();
    building b2(30);
    b2.display();
    building b3(b2);
    b3.display();

    return 0;
}