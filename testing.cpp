#include <iostream>
#include <string>
#include <array>
#include <cctype>

int main(){

    std::array<std::string, 4> coins {
        "pennies", "nickels", "dime", "quarters"
    };
    std::array<std::string, 4>& upper = coins;
    for(int i = 0; i < coins.size(); i++){
        upper[i][0] = std::toupper(upper[i][0]);
        std::cout << upper [i] << " ";
    }

    std::cout << std::endl;

    return 0;
}