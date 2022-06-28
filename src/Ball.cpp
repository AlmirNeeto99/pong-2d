#include "Ball.hpp"

Ball::Ball(int x, int y) : sf::CircleShape(this->RADIUS) {
    this->setPosition(sf::Vector2f(x - this->RADIUS, y - this->RADIUS));
}