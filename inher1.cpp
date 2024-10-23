#include <iostream>
using namespace std;

// Base class
class Base {
public:
    // Function to calculate the product of two numbers
    void displayProduct(int a, int b) {
        cout << "Product: " << (a * b) << endl;
    }
};

// Derived class
class Derived : public Base {
private:
    int num1;
    int num2;

public:
    // Constructor to initialize numbers
    Derived(int x, int y) : num1(x), num2(y) {}

    // Function to invoke the base class function
    void calculateAndDisplay() {
        displayProduct(num1, num2);
    }
};

int main() {
    // Create an object of the Derived class
    Derived obj(5, 10);
    
    // Call the function to calculate and display the product
    obj.calculateAndDisplay();

    return 0;
}
