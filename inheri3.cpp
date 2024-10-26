#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseNumber; // Number declared in the base class

public:
    // Constructor to initialize baseNumber
    Base(int num) : baseNumber(num) {}
};

// First derived class
class FirstDerived {
protected:
    int firstDerivedNumber; // Number declared in the first derived class

public:
    // Constructor to initialize firstDerivedNumber
    FirstDerived(int num) : firstDerivedNumber(num) {}
};

// Second derived class
class SecondDerived : public Base, public FirstDerived {
public:
    // Constructor to initialize both baseNumber and firstDerivedNumber
    SecondDerived(int baseNum, int derivedNum) 
        : Base(baseNum), FirstDerived(derivedNum) {}

    // Function to calculate and display the sum of the numbers
    void displaySum() {
        int sum = baseNumber + firstDerivedNumber;
        cout << "Sum of the numbers: " << sum << endl;
    }
};

int main() {
    // Create an object of the SecondDerived class
}
