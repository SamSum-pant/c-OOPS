#include<iostream>
using namespace std;
class author{
    string name;
    string qualification;
    public:
    void getdata(){
        cout<<"Enter Author Name:"<<endl;
        cin>>name;
        cout<<"Enter Author Qualification:"<<endl;
        cin>>qualification;


    }
    void putdata(){
        cout<<"Author Name:"<<name<<endl;
        cout<<"Author Qualification:"<<qualification<<endl;
    }

};

class Publication{
    string pname;
    public:
    void getdata(){
        cout<<"Enter Publication Name:"<<endl;
        cin>>pname;
    }
    void putdata(){
        cout<<"Publication Name:"<<pname<<endl;
    
    }
};

class book:public author,public Publication{
    string title;
    double price;
    public:
    void getdata(){
    author::getdata();
    Publication::getdata();
    cout<<"Enter Book title:"<<endl;
    cin>>title;
    cout<<"Enter Book price:"<<endl;
    cin>>price;
    }

    void putdata(){
        author::putdata();
        Publication::putdata();
        cout<<"Book title:"<<title<<endl;
        cout<<"Book price:"<<price<<endl;
    }

};
int main(){
    book MYbook;
    MYbook.getdata();
    cout<<endl;
    MYbook.putdata();
    return 0;
}