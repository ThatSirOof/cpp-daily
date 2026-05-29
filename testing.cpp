#include <iostream>
#include <string>

enum class TrafficState{

    Green, Yellow, Red

};

void driver_behavior(TrafficState state){

    switch(state){
        case TrafficState::Green:
            std::cout << "Go\n";
            break;
        case TrafficState::Yellow:
            std::cout << "Slow down\n";
            break;
        case TrafficState::Red:
            std::cout << "STOP\n";
            break;    
    }
}

int main(){

    driver_behavior(TrafficState::Green);
    driver_behavior(TrafficState::Yellow);
    driver_behavior(TrafficState::Red);

    return 0; 
}
