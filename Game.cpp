#include <iostream>
#include <string>
#include <memory>

#include <game.h>

void Game::Game(size_t h, size_t w)
{
	world = World(h, w);
}

void Game::add_unit(string type, size_t x, size_t y)
{
	world->addUnit(type, x, y);
}

void Game::attack(size_t x1, size_t y1, size_t x2, size_t y2)
{
	world->cells[x1][y1].squad->attack(world, x2, y2);
}

void Game::input()
{
	string s;
	std::cin >> s;
	if (s == "AddUnit")
	{
		string type;
		size_t x, y;
		cin >> string >> x >> y;
		add_unit(type, x, y);
		return;
	}
	if (s == "AttackUnit")
	{
		size_t x1, y1, x2, y2;
		std::cin >> x1 >> y1 >> X2 >> y2;
		attack(x1, y1, x2, y2)
		return;
	}
}