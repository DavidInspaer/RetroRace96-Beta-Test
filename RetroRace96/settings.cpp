#include <fstream>
#include <iostream>
#include "settings.hpp"

void load_settings() {
    std::ifstream file("settings.ini");
    if (!file) {
        std::cerr << "error while opening file settings.ini";
        std::terminate();
    }

    std::string line;
    while (std::getline(file, line)) {
        auto pos = line.find('=');
        if (pos == std::string::npos)
            continue;

        auto name = line.substr(0, pos);
        auto value = line.substr(pos + 1, line.size());
        std::erase_if(name, [](char ch){ return ch == ' '; });
        std::erase_if(value, [](char ch){ return ch == ' '; });
        config[name] = value;
    }

    WINDOW_X = std::stoi(config["WINDOW_X"]);
    WINDOW_Y = std::stoi(config["WINDOW_Y"]);
    MAX_FPS = std::stoi(config["MAX_FPS"]);
    FORCE = std::stod(config["FORCE"]);
    SCALE = std::stod(config["SCALE"]);
    SPEEDCHECK = std::stod(config["SPEEDCHECK"]);
}
