#pragma once
#pragma warning(push)
#pragma warning(disable: 4275)
#include <SFML/Graphics.hpp>
#pragma warning(pop)

void load_fonts();
void draw_text(sf::RenderWindow& wnd, const std::string& txt, int x, int y, int size=36, sf::Color color=sf::Color::White);
