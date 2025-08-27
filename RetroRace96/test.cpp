#include "test.hpp"
#include <iostream>
#include <string>

class Player {
public:
    float speed {100};
    float pos {0};
    float weight {1.0};
    std::string name {};

    Player(std::string _name) {
        name = _name;
        std::cout << name << " created\n";
    }

    ~Player() {
        std::cout << name << " removed\n";
    }

    void move() {
        pos += speed / weight;
    }

    void operator =(float _speed) {
        speed = _speed;
    }

    virtual void info() {
        std::cout << "pos: " << pos << std::endl;
        std::cout << "speed: " << speed << std::endl;
        std::cout << "weight: " << weight << std::endl;
        std::cout << std::endl;
    }
};

class Type2: public Player {
public:
    Type2(std::string _name): Player(_name) {
        weight = 2000;
        speed = 300;
    }

    void info() override {
        std::cout << "INFO FOR TYPE2: " << std::endl;
        Player::info();
    }
};

void test() {
    Type2 bullet("name 1");
    bullet.info();

    Player p("player");
    p.info();
    //bullet.move();
}
