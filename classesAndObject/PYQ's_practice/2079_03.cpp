#include<iostream>
using namespace std;
class objectcounter{
    static int objectcount;
    public:
    objectcounter(){
        objectcount ++;
    }
    static void display(){
        cout<<"NUmber of object created :"<<objectcount<<endl;
     }
     };
    int objectcounter::objectcount=0;

int main(){
    objectcounter obj1;
    objectcounter obj2;
    objectcounter obj3;
    objectcounter obj4;
    objectcounter obj5;
    objectcounter obj6;
    objectcounter obj7;

    objectcounter::display();
    return 0;
}