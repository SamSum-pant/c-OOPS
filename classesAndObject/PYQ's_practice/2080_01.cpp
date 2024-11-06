#include<iostream>
using namespace std;
class actor{
    string name;
    float rating;
    public:
    actor(string a, float r):name(a),rating(r){}
    void display()const{
        if(rating>5){
            cout<<"NAME :"<<name<< endl<<"RATING :"<<rating<<endl;
        }
    }


};

int main(){
    const actor a1("Leonardo DiCarpio", 9);
    const actor a3("Johnny deep", 9);
    const actor a4(" Robert Downey Jr. ", 9);
    const actor a2(" Christian Bale ", 9);
    const actor a5("Bryan Cranston ", 9);
    const actor a6(" Cillian Murphy ", 9);
    const actor a7(" Antony starr ", 9);
    const actor a8(" Arjun Kapoor ", 4.5);

    a1.display();
    a2.display();
    a3.display();
    a4.display();
    a5.display();
    a6.display();
    a7.display();
    a8.display();

    return 0;
}
