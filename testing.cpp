#include <iostream>
#include <string>
#include <cctype>

struct Point2D{
    int x{};
    int y{};

};

void print_point(const Point2D& Coordinate){
    std::cout << Coordinate.x << ", " << Coordinate.y << std::endl;
}

int main(){

    Point2D point{5, 10};

    print_point(point);

    return 0;
}