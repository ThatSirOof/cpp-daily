#include <iostream>
#include <string>

struct Sword{
    std::string name{};
    double damage{};
};

struct Player{
    std::string name{};
    double health{};
    Sword sword{};
};

    void print_sword(const Sword& sword_info);
    void print_player(const Player& player_info);
    int heal_player(Player& player_info, int amount);
    double upgrade_sword(Sword& sword_info, double bonus_dmg);

int main(){

    int healing {30};
    double bonus_dmg {75.4};

    Player Player_1{"Jay", 100,{"Beansprout", 99}};
    std::cout << "Sword info: ";
    print_sword(Player_1.sword);

    std::cout << "Player and sword info: ";
    print_player(Player_1);

    std::cout << "After healing: " << heal_player(Player_1, healing) << std::endl;
    std::cout << "After additional damage to the sword: " << upgrade_sword(Player_1.sword, bonus_dmg) << std::endl;

    std::cout << "New Player and sword info: ";
    print_player(Player_1);

    return 0;
}

    void print_sword(const Sword& sword_info){
        std::cout << sword_info.name <<" "<< sword_info.damage << std::endl;
    }

    void print_player(const Player& player_info){
        std::cout << player_info.name << " " << player_info.health << " " 
        << player_info.sword.name <<" "<< player_info.sword.damage << std::endl;
    }

    int heal_player(Player& player_info, int amount){
        return player_info.health += amount;
    }

    double upgrade_sword(Sword& sword_info, double bonus_dmg){
        return sword_info.damage += bonus_dmg;
    }
    
    
    

