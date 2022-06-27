#ifndef PADDLE_H

#define PADDLE_H

#include "SFML/Graphics.hpp"

class Paddle : public sf::RectangleShape {
   private:
    static constexpr float WIDTH = 15, HEIGHT = 120;
    int x, y;

   public:
    Paddle(int, int);
};

#endif