// //  1. Procedural Programming (POP)
// #include <iostream>

// // Function to calculate area
// double calculateArea(double length, double width) {
//     return length * width;
// }

// int main() {
//     double length, width;
//     std::cout << "Enter length: ";
//     std::cin >> length;
//     std::cout << "Enter width: ";
//     std::cin >> width;

//     double area = calculateArea(length, width);
//     std::cout << "Area of rectangle: " << area << "\n";
//     return 0;
// }

// 2. Object-Oriented Programming (OOP)

#include <iostream>

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) : length(l), width(w) {}

    double area() const {
        return length * width;
    }

    void display() const {
        std::cout << "Rectangle: " << length << " x " << width
                  << " → Area: " << area() << "\n";
    }
};

int main() {
    double l, w;
    std::cout << "Enter length: ";
    std::cin >> l;
    std::cout << "Enter width: ";
    std::cin >> w;

    Rectangle rect(l, w);
    rect.display();

    return 0;
}