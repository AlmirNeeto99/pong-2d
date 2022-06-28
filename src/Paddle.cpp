#include "Paddle.hpp"

Paddle::Paddle(int x, int y) : RectangleShape(sf::Vector2f(this->WIDTH, this->HEIGHT)) {
    this->setPosition(sf::Vector2f(x, y));
}

void Paddle::update(double dt) {
    int speed = 50;
    sf::Vector2f curPos = this->getPosition();

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        curPos.y -= (1.f * dt) * speed;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        curPos.y += (1.f * dt) * speed;
    }
    if (curPos.y <= 0) {
        curPos.y = 0;
    } else if ((curPos.y + this->HEIGHT) >= Window::HEIGHT) {
        curPos.y = Window::HEIGHT - this->HEIGHT;
    }
    this->setPosition(curPos);
}