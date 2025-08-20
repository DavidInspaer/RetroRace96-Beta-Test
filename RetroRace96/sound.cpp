#include <iostream>
#include <map>
#include <memory>
#include "SFML/Audio.hpp"

struct Sound {
    std::shared_ptr<sf::SoundBuffer> buf {};
    std::shared_ptr<sf::Sound> snd {};
};

static std::map<std::string, Sound> sounds;

static void load_sound(std::string name, std::string file) {
    auto buf = std::make_shared<sf::SoundBuffer>(file);
    sounds[name] = Sound {
        .buf = buf,
        .snd = std::make_shared<sf::Sound>(*buf),
    };
}

void load_sounds() {
    // All sounds for Cars
    load_sound("V6", "Assets/Sounds/V6.ogg");
    load_sound("V8", "Assets/Sounds/V8.ogg");
    load_sound("I4", "Assets/Sounds/I4.ogg");
}

void play_sound(const std::string& name, float gain, float pitch) {
     try {
        auto& snd = sounds.at(name);
        snd.snd->setVolume(gain);
        snd.snd->setPitch(pitch);
        snd.snd->play();
    } catch (...) {
        std::cerr << "error while playing sound \"" << name << "\"\n";
        std::terminate();
    }
}
