#include "Ball.hpp"

Ball::Ball(int x, int y) : sf::CircleShape(this->RADIUS) {
    this->setPosition(sf::Vector2f(x - this->RADIUS, y - this->RADIUS));
    int angle = rand() % 360;
    this->direction.x = this->RADIUS * cos(angle);
    this->direction.y = this->RADIUS * sin(angle);
}

void Ball::update(double dt) {
    sf::Vector2f curPos = this->getPosition();

    curPos.x += this->direction.x * dt * 50;
    curPos.y += this->direction.y * dt * 50;
    if (((curPos.x + this->RADIUS) >= (Window::WIDTH - this->RADIUS)) || ((curPos.x - this->RADIUS) <= (0 - this->RADIUS))) {
        this->direction.x *= -1;
    }
    if (((curPos.y + this->RADIUS) >= (Window::HEIGHT - this->RADIUS)) || ((curPos.y - this->RADIUS) <= (0 - this->RADIUS))) {
        this->direction.y *= -1;
    }
    this->setPosition(curPos);
}