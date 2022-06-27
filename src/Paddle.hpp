#ifndef PADDLE_H

#define PADDLE_H

#include "SFML/Graphics.hpp"

class Paddle : public sf::RectangleShape {
   private:
    int x, y;

   public:
    constexpr static float WIDTH = 15, HEIGHT = 120;
    Paddle(int, int);
};

#endif