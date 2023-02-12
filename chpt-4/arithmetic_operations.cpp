#include <iostream>

int main() {

	int firstNum, secondNum;

	std::cout << "Please enter the first number: ";
	std::cin >> firstNum;

	std::cout << "Please enter the second number: ";
	std::cin >> secondNum;

	//Addition of the variables
	std::cout << firstNum << " + " << secondNum << " = " << firstNum + secondNum << '\n';

	//Substraction of the variables
	std::cout << firstNum << " - " << secondNum << " = " << firstNum - secondNum << '\n';

	//Multiplication of the variables
	std::cout << firstNum << " * " << secondNum << " = " << firstNum * secondNum << '\n';

	//Division of the variables
	std::cout << firstNum << " / " << secondNum << " = " << firstNum / secondNum << '\n';

	//Modulus operation on the variables
	std::cout << firstNum << " % " << secondNum << " = " << firstNum % secondNum << '\n';

}
