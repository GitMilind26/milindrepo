#include <iostream>
using namespace std;

// Base class
class Base {
protected:
    int baseNumber;  // Number declared in the base class

public:
    // Constructor to initialize baseNumber
    Base(int num) : baseNumber(num) {}
};

// First derived class
class FirstDerived : public Base {
protected:
    int firstDerivedNumber;  // Number declared in the first derived class

public:
    // Constructor to initialize both baseNumber and firstDerivedNumber
    FirstDerived(int baseNum, int derivedNum) : Base(baseNum), firstDerivedNumber(derivedNum) {}
};

// Second derived class
class SecondDerived : public FirstDerived {
public:
    // Constructor to initialize the second derived class
    SecondDerived(int baseNum, int derivedNum) : FirstDerived(baseNum, derivedNum) {}

    // Function to calculate and display the sum of the numbers
    void displaySum() {
        int sum = baseNumber + firstDerivedNumber;
        cout << "Sum of the numbers: " << sum << endl;
    }
};

int main() {
    // Create an object of the SecondDerived class
    SecondDerived obj(5, 10);
    
    // Call the function to display the sum
    obj.displaySum();

    return 0;
}
