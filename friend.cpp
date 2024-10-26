#include <iostream>

class PrimeChecker;  
class Number {
private:
    int value;

public:
    Number(int v) : value(v) {}
 
    friend class PrimeChecker;
};

class PrimeChecker {
public:
     
    bool isPrime(Number& num) {
        if (num.value <= 1) return false;
        for (int i = 2; i <= num.value / 2; ++i) {
            if (num.value % i == 0) {
                return false; // Not prime
            }
        }
        return true; // Is prime
    }

    void checkAndDisplay(Number& num) {
        if (isPrime(num)) {
            std::cout << num.value << " is a prime number." << std::endl;
        } else {
            std::cout << num.value << " is not a prime number." << std::endl;
        }
    }
};

int main() {
    int inputValue;
    std::cout << "Enter a number: ";
    std::cin >> inputValue;

    Number number(inputValue);
    PrimeChecker primeChecker;
    primeChecker.checkAndDisplay(number);  

    return 0;
}
