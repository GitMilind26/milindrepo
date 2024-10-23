#include <iostream>
using namespace std;

class SwapNumbers {
private:
    int num1;
    int num2;

public:
    // Parameterized constructor
    SwapNumbers(int a, int b) : num1(a), num2(b) {}

    // Function to swap the numbers
    void swap() {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Function to display the numbers
    void display() const {
        cout << "Num1: " << num1 << ", Num2: " << num2 << endl;
    }
};

int main() {
    // Create an object of SwapNumbers with initial values
    SwapNumbers swapObj(10, 20);

    // Display original numbers
    cout << "Original numbers: ";
    swapObj.display();

    // Swap the numbers
    swapObj.swap();

    // Display swapped numbers
    cout << "Swapped numbers: ";
    swapObj.display();

    return 0;
}
