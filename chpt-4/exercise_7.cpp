#include <iostream>

int main() {
    int first_variable;
    double second_variable;

    std::cout << "Please enter the first number: ";
    std::cin >> first_variable;

    std::cout << "Please enter the second number: ";
    std::cin >> second_variable;

    std::cout << first_variable << " + " << second_variable << " = " << first_variable + second_variable << "\n";
    std::cout << first_variable << " - " << second_variable << " = " << first_variable - second_variable << "\n";
    std::cout << first_variable << " * " << second_variable << " = " << first_variable * second_variable << "\n";
    std::cout << first_variable << " / " << second_variable << " = " << first_variable / second_variable << "\n";
}
