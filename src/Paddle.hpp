#ifndef PADDLE_H

#define PADDLE_H

#include "SFML/Graphics.hpp"
#include "Window.hpp"

class Paddle : public sf::RectangleShape {
   private:
    int x, y;

   public:
    constexpr static float WIDTH = 15, HEIGHT = 120;
    Paddle(int, int);
	void update(double);
};

#endif