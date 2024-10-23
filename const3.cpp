#include <iostream>
#include <vector>

using namespace std;

class NumberArray {
private:
    vector<int> numbers;

public:
    // Constructor to initialize the array with given values
    NumberArray(const vector<int>& nums) : numbers(nums) {}

    // Copy constructor
    NumberArray(const NumberArray& other) : numbers(other.numbers) {}

    // Function to calculate the sum of positive numbers
    int sumPositive() const {
        int sum = 0;
        for (int num : numbers) {
            if (num > 0) {
                sum += num;
            }
        }
        return sum;
    }

    // Function to display the numbers
    void display() const {
        cout << "Numbers: ";
        for (int num : numbers) {
            cout << num << " ";
        }
        cout << endl;
    }
};

int main() {
    // Initialize an array of numbers
    vector<int> values = {10, -5, 20, 0, -3, 15};

    // Create an object of NumberArray
    NumberArray originalArray(values);

    // Display the original numbers
    originalArray.display();

    // Use the copy constructor to create a new object
    NumberArray copiedArray(originalArray);

    // Calculate and display the sum of positive numbers
    int positiveSum = copiedArray.sumPositive();
    cout << "Sum of positive numbers: " << positiveSum << endl;

    return 0;
}
