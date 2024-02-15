#ifndef BALL_H

#define BALL_H

#include "SFML/Graphics.hpp"
#include "Window.hpp"
#include "cmath"

class Ball : public sf::CircleShape
{
public:
    Ball(int, int);
    int x, y;
    void update(double);

private:
    static constexpr int RADIUS = 10;
    static constexpr float speed = 50.f;
    sf::Vector2f direction;
};

#endif