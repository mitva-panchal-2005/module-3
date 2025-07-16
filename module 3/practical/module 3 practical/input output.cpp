#include <iostream>
#include <string>   // Needed for std::string and getline()

int main() {
    std::string name;
    int age;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);          // Reads full name including spaces

    std::cout << "Enter your age: ";
    std::cin >> age;                        // Reads integer age

    std::cout << "Hello, " << name << "! You are " << age << " years old.\n";
    return 0;
}
