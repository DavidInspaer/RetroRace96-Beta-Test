#pragma once
#pragma warning(push)
#pragma warning(disable: 4275)
#include <SFML/Graphics.hpp>
#pragma warning(pop)
#include <string>
#include <map>

inline int WINDOW_X = 1280;
inline int WINDOW_Y = 720;
inline int MAX_FPS = 120;
inline float FORCE = 1.5; // Force value
inline float SCALE = 6; // texture scale
inline float SPEEDCHECK = 50;
inline const auto GAME_NAME = "Retro Race 96";
inline const sf::Color BG_COLOR(0,0,64);
inline bool game_work = true;

inline std::map<std::string, std::string> config;

void load_settings();
