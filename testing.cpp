#include <iostream>
#include <string>
#include <cctype>

int main(){

    std::string text{};
    int count{0};

    std::cout << "Write a random text: ";
    std::getline(std::cin, text);

    for(const char& recieve: text){

        char vowels = std::tolower(recieve);

        if( vowels == 'a' || vowels == 'e' || vowels == 'i'|| vowels == 'o'|| vowels == 'u'){
            count++;    
        }
    }

    std::cout << "There are " << count << " vowels!\n";

    return 0;
}