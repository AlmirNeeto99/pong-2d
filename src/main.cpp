#include <iostream>

#include "Paddle.hpp"
#include "SFML/Graphics.hpp"

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

int main(int argc, char const *argv[]) {
    sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Pong", sf::Style::Titlebar | sf::Style::Close);

    const int yOffset = (WINDOW_HEIGHT / 2) - (Paddle::HEIGHT / 2);
    Paddle p1(Paddle::WIDTH, yOffset), p2(WINDOW_WIDTH - (Paddle::WIDTH * 2), yOffset);

    sf::Event event;
    const sf::Color clearColor(120, 15, 30, 255);

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(clearColor);
        // Update
        // Draw
        window.draw(p1);
        window.draw(p2);
        window.display();
    }

    return 0;
}
