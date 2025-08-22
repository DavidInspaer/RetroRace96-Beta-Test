#include <map>
#include <memory>
#include "graphic.hpp"

struct Texture {
    std::shared_ptr<sf::Texture> tex {};
    std::shared_ptr<sf::Sprite> spr {};
};

std::map<std::string, Texture> textures;

static void load_texture(std::string name, std::string file) {
    auto tex = std::make_shared<sf::Texture>(file);
    textures[name] = Texture {
        .tex = tex,
        .spr = std::make_shared<sf::Sprite>(*tex),
    };
}

void load_textures() {

    // All textures of Cars
    load_texture("Kustar", "Assets/Cars/car0.png");
    load_texture("Bullet", "Assets/Cars/car1.png");
    load_texture("Vextune", "Assets/Cars/car2.png");
    load_texture("Bowler", "Assets/Cars/car3.png");
    load_texture("Banger", "Assets/Cars/car4.png");
    load_texture("Ralier GT", "Assets/Cars/car5.png");
    load_texture("Bowler XL", "Assets/Cars/car6.png");
    load_texture("Vegas", "Assets/Cars/car7.png");
    load_texture("BMW Bonus", "Assets/Cars/bonuscar0.png");
    load_texture("SUPRA Bonus", "Assets/Cars/bonuscar1.png");
    load_texture("CHARGER Bonus", "Assets/Cars/bonuscar2.png");
    load_texture("SCHOOL BUS BONUS", "Assets/Cars/bonuscar3.png");

    // All Levels Textures
}

void draw_texture(sf::RenderWindow& window, float x, float y, const std::string& name, float scale, float angle) {
     try {
        auto& texture = textures.at(name);
        auto sz = texture.tex->getSize(); // texture size
        auto center = sf::Vector2f(sz.x / 2.0, sz.y / 2.0);
        texture.spr->setPosition(sf::Vector2f{x - sz.x * scale / 2, y - sz.y * scale / 2});
        texture.spr->setOrigin(sf::Vector2f{center.x, center.y});
        texture.spr->setScale(sf::Vector2f{scale, scale});
        texture.spr->setRotation(sf::degrees(angle));
        window.draw(*texture.spr);
    } catch (...) {}
}
