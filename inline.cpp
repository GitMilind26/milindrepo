#include <iostream>

class Student {
public:
  
    inline void displaySum(int a, int b) {
        std::cout << "Sum: " << (a + b) << std::endl;
    }
};

int main() {
    Student student;
    int num1, num2;

    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;

    student.displaySum(num1, num2);  

    return 0;
}
