#include <iostream>

int main() {
	
	enum class Week {
		Sunday,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday,
	};

	Week day_one = Week::Sunday, day_two = Week::Monday, day_three = Week::Tuesday;

	std::cout << "First day is: " << day_one << '\n';
	std::cout << "Second day is: " << day_two << '\n';
	std::cout << "Third day is: " << day_three << '\n';
}
