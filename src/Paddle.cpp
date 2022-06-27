#include "Paddle.hpp"

Paddle::Paddle(int x, int y) : RectangleShape(sf::Vector2f(this->WIDTH, this->HEIGHT)) {
    this->setPosition(sf::Vector2f(x, y));
}