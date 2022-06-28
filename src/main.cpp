#include <iostream>

#include "Paddle.hpp"
#include "SFML/Graphics.hpp"
#include "Window.hpp"

int main(int argc, char const *argv[]) {
    sf::RenderWindow window(sf::VideoMode(Window::WIDTH, Window::HEIGHT), "Pong", sf::Style::Titlebar | sf::Style::Close);

    const int yOffset = (Window::HEIGHT / 2) - (Paddle::HEIGHT / 2);
    Paddle p1(Paddle::WIDTH, yOffset), p2(Window::WIDTH - (Paddle::WIDTH * 2), yOffset);

    sf::Event event;
    const sf::Color clearColor(120, 15, 30, 255);

    sf::Clock clock;
    double dt = 0;

    while (window.isOpen()) {
        dt = (double)clock.restart().asMicroseconds() / 100000;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }
        window.clear(clearColor);
        // Update
        p1.update(dt);
        p2.update(dt);
        // Draw
        window.draw(p1);
        window.draw(p2);
        window.display();
    }

    return 0;
}
