#include <iostream>
#include <string>

class Student;  
void displayStudentDetails(const Student& student);

class Student {
private:
    std::string name;
    int age;
    std::string department;
    std::string course;

public:
    Student(std::string n, int a, std::string dep, std::string c)
        : name(n), age(a), department(dep), course(c) {}

    
    friend void displayStudentDetails(const Student& student);
};

 
void displayStudentDetails(const Student& student) {
    std::cout << "Student Details:\n";
    std::cout << "Name: " << student.name << std::endl;
    std::cout << "Age: " << student.age << std::endl;
    std::cout << "Department: " << student.department << std::endl;
    std::cout << "Course: " << student.course << std::endl;
}

int main() {
    Student student("Alice", 20, "Computer Science", "Software Engineering");
    displayStudentDetails(student);

    return 0;
}
