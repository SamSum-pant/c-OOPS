#include <iostream>
using namespace std;

class Height; // Forward declaration

// Friend function declaration for operator overloading
Height operator+(const Height &h1, const Height &h2);

class Height {
private:
    int meter;      // Meters
    int centimeter; // Centimeters

public:
    // Constructor
    Height(int m = 0, int cm = 0) : meter(m), centimeter(cm) {}

    // Friend function to overload the + operator
    friend Height operator+(const Height &h1, const Height &h2);

    // Function to display height
    void display() const {
        cout << "Height: " << meter << " meters and " << centimeter << " centimeters" << endl;
    }
};

// Overloading the + operator using a friend function
Height operator+(const Height &h1, const Height &h2) {
    int totalCentimeters = (h1.meter * 100 + h1.centimeter) + (h2.meter * 100 + h2.centimeter);
    int meters = totalCentimeters / 100;
    int centimeters = totalCentimeters % 100;
    return Height(meters, centimeters);
}

int main() {
    int m1, cm1, m2, cm2;

    cout << "Enter height 1 (meters and centimeters): ";
    cin >> m1 >> cm1;
    
    cout << "Enter height 2 (meters and centimeters): ";
    cin >> m2 >> cm2;

    Height h1(m1, cm1); // First height object
    Height h2(m2, cm2); // Second height object

    // Using overloaded + operator to add heights
    Height h3 = h1 + h2;

    cout << "Height after addition: ";
    h3.display();

    return 0;
}