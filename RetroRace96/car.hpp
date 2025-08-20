#pragma once
#include <string>
#include "settings.hpp"

struct Car {
    // center of car(in pos)
    float x {};
    float y {};
    // vector of acceleration
    float vx {};
    float vy {};
    float speed_max {}; // speedlimit
    float acceleration{}; // acceleration of car
    float reverse{}; // 
    float weight{}; // weight of car for drift
    float steerspeed{}; // speed of steering
    float anglerot{}; // angle rotation
    float hitbox {30}; // hitbox radius
    unsigned hp {}; //damage
    std::string name {};
    std::string skin {}; // texture ID
    std::string sound_engine{}; // sound ID (for engine)
    std::string sound_nitro{}; // sound ID (for nitro)
};

Car make_bot();
Car make_player();
void draw(sf::RenderWindow& window, const Car& car, float scale=1, float angle=0);
void update(Car& car, float dt);
void update_bot(Car& car, float dt);
void bound(Car& car);
void collision_detect(Car& a, Car& b);
