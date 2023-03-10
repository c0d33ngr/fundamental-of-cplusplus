#include <iostream>

int main() {

    double x_one, y_one;
    double x_two, y_two;
    char left_paren, comma, right_paren;

    std::cout << "Please enter the first point: "; 
    std::cin >> left_paren >> x_one >> comma >> y_one >> right_paren;

    std::cout << "Please enter the second point: ";
    std::cin >> left_paren >> x_two >> comma >> y_two >> right_paren;

    double x_mid = x_one + x_two / 2;
    double y_mid = y_one + y_two / 2;

    std::cout << "The midpoint of (" << x_one << " , " << y_one << ") and " << "(" << x_two << " , " << y_two << ") is (" << x_mid << " , " << y_mid << ")" << "\n";
}
