#pragma once
#pragma warning(push)
#pragma warning(disable: 4275)
#include <SFML/Graphics.hpp>
#pragma warning(pop)

inline const int WINDOW_X = 1280;
inline const int WINDOW_Y = 720;
inline const int MAX_FPS = 120;
inline const float FORCE = 1.5; // Force value
inline const float SCALE = 6; // texture scale
inline const float SPEEDCHECK = 50;
inline const auto GAME_NAME = "Retro Race 96";
inline const sf::Color BG_COLOR(0,0,64);
inline bool game_work = true;