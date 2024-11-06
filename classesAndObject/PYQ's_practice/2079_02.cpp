#include<iostream>
using namespace std;
void displaychar(char ch , int count=1){
    for(int i=0;i<=count;i++){
        cout<<ch;
    }
    cout<<endl;
}
int main(){
    char character;
    int count;
    cout<<"Enter the Character you wanna display :";
    cin>>character;
    cout<<"ENter the number of times you want to display: ";
    cin>>count;
    displaychar(character,count);

    return 0;
}