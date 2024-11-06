#include <iostream>
using namespace std;

class Box {
    private:
        double* length;

    public:
        // Constructor
        Box(double l) {
            length = new double;
            *length = l;
            cout << "Box created with length = " << *length << endl;
        }

        // Destructor
        ~Box() {
            cout << "Box with length = " << *length << " is being destroyed." << endl;
            delete length;  // Clean up dynamically allocated memory
        }
};

int main() {
    Box box1(10.5);
    Box box2(20.5);
  

    // Destructors are called automatically when box1 and box2 go out of scope
    return 0;
}
