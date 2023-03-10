#include <iostream>

int main() {

    const int BEAN_BURRITO = 357;
    const int SALAD_W_DRESSING = 185;
    const int MILKSHAKE = 388;

    int num_of_bean_burrito;
    int num_of_salad;
    int num_of_milkshakes;


    std::cout << "Number of beans burrito, salad, and milkshakes eaten? ";
    std::cin >> num_of_bean_burrito >> num_of_salad >> num_of_milkshakes;

    int total_calories = (BEAN_BURRITO * num_of_bean_burrito) + (SALAD_W_DRESSING * num_of_salad) + (MILKSHAKE * num_of_milkshakes);
    double distance = total_calories / 100.0;

    std::cout << "You ingested " << total_calories << " Calories" << "\n";
    std::cout << "You will have to run " << distance << " miles to expend that much energy" << "\n";
}
