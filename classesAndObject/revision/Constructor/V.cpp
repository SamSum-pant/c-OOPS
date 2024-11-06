#include <iostream>
using namespace std;

class Box {
    private:
        double* length;  // Pointer to double

    public:
        // Constructor
        Box(double l) {
            length = new double;  // Allocate memory for length
            *length = l;  // Assign value to the allocated memory
            cout << "Box created with length = " << *length << endl;
        }

        // Function to display the length
        void display() const {
            cout << "Length: " << *length << endl;
        }

        // Note: We are not defining a destructor, so the default destructor will be used
};

int main() {
    Box box1(10.5);  // Constructor is called, memory allocated for length
    Box box2 = box1; // Default copy constructor is called

    // Display lengths of both boxes
    box1.display();
    box2.display();

    // Since we didn't define a destructor, C++ uses the default destructor
    return 0;
}
