#include <iostream>

int main(){

    int score {30};
    int& playerscore = score;

    playerscore += 5;

    std::cout << score << std::endl;
    std::cout << playerscore << std::endl;

    return 0;
}