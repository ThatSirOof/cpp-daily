#include <iostream>
#include <math.h>

struct Point2D{
    double x{};
    double y{};
};

void print_point(const Point2D& coordinate);
void print_distance(double distance);
void move_point(Point2D& coordinate, int dx, int dy);

double calculate_distance(const Point2D& first_set, const Point2D& second_set);
Point2D midpoint(const Point2D& first_set, const Point2D& second_set);

int main(){

    Point2D point_1{};
    Point2D point_2{};

    int x_value{}, y_value{};

    std::cout << "Choose two different coordinate(x,y): ";
    std::cin >> point_1.x >> point_1.y >> point_2.x >> point_2.y;

    std::cout << "The first coordinate are: ";
    print_point(point_1);
    std::cout << "The second coordinate are: ";
    print_point(point_2);

    std::cout << "The calculated distances are: ";
    calculate_distance(point_1, point_2);

    std::cout << "Pick two numbers(x, y) to modify the coordinates: ";
    std::cin >> x_value >> y_value;
    move_point(point_1, x_value, y_value);
    move_point(point_2, x_value, y_value);
    
    std::cout << "New first coordinates are: ";
    print_point(point_1);
    std::cout << "New second coordinates are: ";
    print_point(point_2);

    std::cout << "The midpoint of the coordinates are: ";
    print_point(midpoint(point_1, point_2));
    
    return 0;
}

void print_point(const Point2D& coordinate){
    std::cout << coordinate.x << ", " << coordinate.y << std::endl;
}


double calculate_distance(const Point2D& first_set, const Point2D& second_set){
    double distance = sqrt(pow(second_set.x - first_set.x, 2) + pow(second_set.y - first_set.y, 2));

    print_distance(distance);

    return distance;
}

void print_distance(double distance){
    std::cout << distance << std::endl;
}

void move_point(Point2D& point, int dx, int dy){
    point.x += dx;
    point.y += dy;
}

Point2D midpoint(const Point2D& first_set, const Point2D& second_set){
    Point2D mid{};

    mid.x = (first_set.x + second_set.x) / 2;
    mid.y = (first_set.y + second_set.y) / 2;

    return mid;
}
