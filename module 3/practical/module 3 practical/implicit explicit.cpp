#include <iostream>
#include <string>
#include <iomanip>  // for std::fixed, std::setprecision

int main() {
    // Implicit conversions

    int i = 7;
    double d = i;  // implicit: int → double
    std::cout << "Implicit int->double: d = " << d << "\n";

    float f = 5.9f;
    int j = f;     // implicit (or implicit narrowing): float → int (fraction lost)
    std::cout << "Implicit float->int: j = " << j << "\n";

    // In mixed-type math, lower types are promoted:
    double result = i + f;  // f promoted to double
    std::cout << "Mixed-type addition (int + float -> double): " << result << "\n";

    // Explicit conversions

    double x = 3.14159;
    int xi = static_cast<int>(x); // explicit cast, keeps integer part only
    std::cout << "Explicit double->int using static_cast: xi = " << xi << "\n";

    char c = 'A';
    int ascii = static_cast<int>(c); // explicit char → ASCII code
    std::cout << "Explicit char->int: '" << c << "' -> ASCII " << ascii << "\n";

    std::string s = "12345";
    int num = std::stoi(s); // explicit string → int
    std::cout << "Explicit string->int using stoi: \"" << s << "\" -> " << num << "\n";

    // Example: C-style cast
    double y = 9.99;
    int yi = (int)y; // old-style cast
    std::cout << "C-style cast double->int: yi = " << yi << "\n";

    // Demonstration of precision control
    double val = 12.3456;
    int scaled = static_cast<int>(val * 100);     // scale and truncate
    double rounded = scaled / 100.0;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Rounded value to 2 decimals via explicit cast: " << rounded << "\n";

    return 0;
}
