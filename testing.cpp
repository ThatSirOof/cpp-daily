#include <iostream>
#include <string>

struct Student{
    std::string name{};
    int age{};
    double average_grade{};
};

void print_student(const Student& info);
double update_average(Student& student, double new_average);
int birthday(Student& student);
bool compare_average(const Student& first, const Student& second);


int main(){

    Student info_1;
    Student info_2;

    double new_average {5.5};

    std::cout << "Enter student 1's name, age and grade: ";
    std::cin >> info_1.name >> info_1.age >> info_1.average_grade;
    print_student(info_1);

    std::cout << "Enter student 2's name, age and grade: ";
    std::cin >> info_2.name >> info_2.age >> info_2.average_grade;
    print_student(info_2);

    std::cout << "Student 2 new updated average is: " << update_average(info_2, new_average) << std::endl;
    
    if(compare_average(info_1, info_2)){
        std::cout << "The averages are equal\n";
    }  
    else{
        std::cout << "The averages are different\n";
    }

    std::cout << "After Student 1's birthday: " << birthday(info_1) << std::endl;


    return 0;
}

void print_student(const Student& info){
    std::cout << info.name << " " << info.age << " " << info.average_grade << std::endl;
}

double update_average(Student& student, double new_average){
    return student.average_grade += new_average;
}

bool compare_average(const Student& first, const Student& second){
    return first.average_grade == second.average_grade;
}

int birthday(Student& student){
    return student.age+= 1;
}
