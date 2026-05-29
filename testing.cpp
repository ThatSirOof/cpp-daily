#include <iostream>
#include <string>

enum class DrinkType{

    Water, Juice, Soda, Coffee, Tea

};

void ideal_temperature(DrinkType state){

    switch(state){
        case DrinkType::Water:
            std::cout << "Water is best cold\n";
            break;
        case DrinkType::Juice:
            std::cout << "Juice is best fresh and cold\n";
            break;
        case DrinkType::Soda:
            std::cout << "Soda is best cold\n";
            break;    
        case DrinkType::Coffee:
            std::cout << "Coffee is best hot\n";
            break;
        case DrinkType::Tea:
            std::cout << "Tea can be either cold or hot\n";
            break;
    }
}

int main(){

    ideal_temperature(DrinkType::Water);
    ideal_temperature(DrinkType::Juice);
    ideal_temperature(DrinkType::Soda);
    ideal_temperature(DrinkType::Coffee);
    ideal_temperature(DrinkType::Tea);

    return 0; 
}
