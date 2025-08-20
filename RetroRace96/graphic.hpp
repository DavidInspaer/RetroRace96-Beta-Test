#pragma once
#include <string>
#include "settings.hpp"

void load_textures();

void draw_texture(sf::RenderWindow& window, float x, float y, const std::string& name, float scale=1, float angle=1);
