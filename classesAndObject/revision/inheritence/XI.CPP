// EXAMPLE OF OPERATOR(BINARY) OVERLOADING USING FRIEND FUNCTION 

#include<iostream>
using namespace std;

class complex {
    public:
        int real;
        int img;

        // Default Constructor
        complex() {}

        // Parameterized Constructor
        complex(int real, int img) {
            this->real = real;
            this->img = img;
        }

        // Display function
        void display() {
            cout << real << "+i" << img << endl;
        }

        // Friend function for operator overloading
        friend complex operator +(complex &c1, complex &c2);
};

// Friend function definition
complex operator +(complex &c1, complex &c2) {
    complex ans;
    ans.real = c1.real + c2.real;
    ans.img = c1.img + c2.img;
    return ans;
}

int main() {
    complex c1(3, 4);   // First complex number: 3 + 4i
    complex c2(5, 6);   // Second complex number: 5 + 6i
    complex c3 = c1 + c2;  // Overloaded + operator
    c3.display();       // Result: 8 + i10
    return 0;
}
