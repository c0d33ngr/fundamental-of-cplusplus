#include <iostream>

int main() {

	enum Year {
		January,
		February,
		March,
		April,
		May,
		June,
		July,
		August,
		September,
		October,
		November,
		December,
	};

	Year month_var_seven = July, month_var_eight = August;

	std::cout << "My birth month is : " << month_var_seven << '\n';
	std::cout << "My mom\'s birth month is: " << month_var_eight << '\n';
}
