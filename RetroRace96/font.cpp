#include "font.hpp"

static sf::Font main_font;

void load_fonts() {
    if (!main_font.openFromFile("Assets/MainFont.OTF")) // Main font register
        throw std::runtime_error("error while loading font file");
}

void draw_text(sf::RenderWindow& wnd, const std::string& txt, int x, int y, int size, sf::Color color) {
    sf::Text text(main_font, txt, size);
    text.setPosition(sf::Vector2f(x, y));
    text.setFillColor(color);
    wnd.draw(text);
}
