#include <iostream>
#include <array>

int main(){

    std::array<int, 5> values {1, 2, 3, 4, 5};
    std::array<int, 5>& num = values;
    for(int i = 0; i < values.size(); i++){
        std::cout << num[i]*2 << " ";
    }

    std::cout << std::endl;

    return 0;
}