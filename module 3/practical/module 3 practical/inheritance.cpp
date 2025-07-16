#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(const string& name, int age) : name(name), age(age) {}

    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Student class inherits from Person
class Student : public Person {
private:
    string gradeLevel;

public:
    Student(const string& name, int age, const string& grade)
        : Person(name, age), gradeLevel(grade) {}

    void displayStudent() const {
        displayPerson();
        cout << "Grade Level: " << gradeLevel << endl;
    }
};

// Teacher class inherits from Person
class Teacher : public Person {
private:
    string subject;

public:
    Teacher(const string& name, int age, const string& subject)
        : Person(name, age), subject(subject) {}

    void displayTeacher() const {
        displayPerson();
        cout << "Teaches: " << subject << endl;
    }
};

int main() {
    Student stu("John Doe", 16, "10th");
    Teacher tchr("Emily Smith", 35, "Mathematics");

    cout << "Student Info:\n";
    stu.displayStudent();

    cout << "\nTeacher Info:\n";
    tchr.displayTeacher();

    return 0;
}
