#include <iostream>
#include <math.h>
#include <string>

struct Product{
    std::string name{};
    double price{};
    double quantity{};
};

void print_product(const Product& information);
double calculate_total_price(const Product& item, double discount);
int update_quantity(Product& item, int new_quantity);
double increase_price(Product& item, double increase);

int main(){

    double discount{0.15};
    double upcount{};
    int quantity{};
    Product vegetable{};

    std::cout << "Pick a vegetable, then give it a price, and a quantity: ";
    std::cin >> vegetable.name >> vegetable.price >> vegetable.quantity;
    print_product(vegetable);

    std::cout << "The total with a discount is: " << calculate_total_price(vegetable, discount) << std::endl;

    std::cout << "\nHow many more quantity would you like to stock more?: ";
    std::cin >> quantity;
    std::cout << "The new quantity is: " << update_quantity(vegetable, quantity) << std::endl;

    std::cout << "\nHow many percentage do you want to increase the price?: ";
    std::cin >> upcount;
    std::cout << "The new price is: " << increase_price(vegetable, upcount) << std::endl;

    return 0;
}

void print_product(const Product& information){
    std::cout << 
    "This is a " << information.name << 
    " and it is worth $" << information.price <<
    " with " << information. quantity << " in stock." << std::endl;
}

double calculate_total_price(const Product& item, double discount){
    double total{item.price};

    total -= item.price * discount;
    return total;
}

int update_quantity(Product& item, int new_quantity){
    return item.quantity += + new_quantity;
}

double increase_price(Product& item, double increase){
    return item.price += item.price * (increase / 100.0);
}




