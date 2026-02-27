#include "Student.hpp"

// Constructor
Student::Student() {
    cout << "Student object created!" << endl;
    name = "";
    age = 0;
}

// Destructor
Student::~Student() {
    cout << "Student object destroyed!" << endl;
}

// Setters
void Student::setName(const string& n) {
    name = n;
}

void Student::setAge(int a) {
    age = a;
}

// Getters
string Student::getName() const {
    return name;
}

int Student::getAge() const {
    return age;
}