#pragma once

#include <iostream>
#include <memory>

#include <world.h>

class Game
{
private:
	World *world;
public:
	void input();
	void add_unit(string type, size_t x, size_t y);
	void attack(size_t x1, size_t y1, size_t x2, size_t y2);

	Game(size_t h, size_t w));
};