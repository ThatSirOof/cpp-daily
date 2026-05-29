#include <iostream>
#include <string>

enum class Comparison{
    Less, Equal, Greater
};

Comparison compare(int a, int b){
    if (a < b)
        return Comparison::Less;
    else if (a > b)
        return Comparison::Greater;
    else
        return Comparison::Equal;
}

void print(Comparison result){
    switch (result){
        case Comparison::Less:
            std::cout << "Less" << std::endl;
            break;
        case Comparison::Greater:
            std::cout << "Greater" << std::endl;
            break;
        case Comparison::Equal:
            std::cout << "Equal" << std::endl;
            break;      
    }
}


int main(){

    print(compare(6,7));
    print(compare(100, 9));
    print(compare(128, 128));

    return 0; 
}
