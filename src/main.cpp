#include "SFML/Graphics.hpp"

int main(int argc, char const *argv[]) {
    sf::RenderWindow window(sf::VideoMode(800, 600), "Pong", sf::Style::Titlebar | sf::Style::Close);

    sf::Event event;

    sf::Vector2f pos1(50, 200), pos2(800 - 50, 200);

    sf::RectangleShape p1(sf::Vector2f(20, 150));
    sf::RectangleShape p2(sf::Vector2f(20, 150));
    p1.setPosition(pos1);
    p2.setPosition(pos2);

    const sf::Color clearColor(120, 15, 30, 255);

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
                pos1.x += 10;
                pos2.x -= 10;
            }
        }
        p1.setPosition(pos1);
        p2.setPosition(pos2);
        window.clear(clearColor);
        window.draw(p1);
        window.draw(p2);
        window.display();
    }

    return 0;
}
