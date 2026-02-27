#ifndef STUDENT_HPP
#define STUDENT_HPP

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int age;

public:
    // Constructor
    Student();

    // Destructor
    ~Student();

    // Mutators (setters)
    void setName(const string&);
    void setAge(int);

    // Accessors (getters)
    string getName() const;
    int getAge() const;
};

#endif