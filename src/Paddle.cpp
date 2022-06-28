#include "Paddle.hpp"

Paddle::Paddle(int x, int y) : RectangleShape(sf::Vector2f(this->WIDTH, this->HEIGHT)) {
    this->setPosition(sf::Vector2f(x, y));
}

void Paddle::update(double dt) {
    int speed = 100, velocity = 0;
    sf::Vector2f curPos = this->getPosition();
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
        velocity = -1;
    } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
        velocity = 1;
    }
    curPos.y += (5.f * dt) * speed * velocity;
    if (curPos.y <= 0) {
        curPos.y = 0;
    } else if ((curPos.y + this->HEIGHT) >= Window::HEIGHT) {
        curPos.y = Window::HEIGHT - this->HEIGHT;
    }
    this->setPosition(curPos);
}