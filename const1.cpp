#include<iostream>
using namespace std;

class Sum {
public:
    Sum(int a, int b) {
        cout << "Sum of two integers: " << a + b << endl;
    }
    
    Sum(float a, float b) {
        cout << "Sum of two floats: " << a + b << endl;
    }
  
    Sum(char a, char b) {
        cout << "Sum of two characters (ASCII values): " << (int)a + (int)b << endl;
    }
};

int main() {
    Sum obj1(10, 20); // Calls integer constructor
    Sum obj2(5.5f, 2.3f); // Calls float constructor
    Sum obj3('A', 'B'); // Calls char constructor
    return 0;
}