#pragma once

#include <vector>
#include <memory>

#include "squad.h"
#include "cell.h"

class World {
public:
	const size_t width, height;
	std::vector<std::vector<Cell>> cells;

	World(size_t width, size_t heght);

	void addUnit(std::unique_ptr<Squad> squad, size_t x, size_t y);

	friend std::ostream& operator<< (std::ostream& lhs, const World& rhs);
};
