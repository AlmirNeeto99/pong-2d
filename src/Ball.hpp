#ifndef BALL_H

#define BALL_H

#include "SFML/Graphics.hpp"

class Ball : public sf::CircleShape {
   public:
    Ball(int, int);
    int x, y;

   private:
    static constexpr int RADIUS = 10;
};

#endif