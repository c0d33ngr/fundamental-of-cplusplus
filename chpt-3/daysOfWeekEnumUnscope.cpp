#include <iostream>

int main() {

	enum Week {
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
	};

	Week day_three = Tuesday;
	Week day_four = Wednesday, day_five = Thursday, day_six = Friday;

	std::cout << "Third day is :" << day_three << '\n';
	std::cout << "Fourth day is :" << day_four << '\n';
	std::cout << "Fifth day is :" << day_five << '\n';
	std::cout << "Sixth day is :" << day_six << '\n';
}
