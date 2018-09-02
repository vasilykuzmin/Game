#pragma once

#include <vector>

#include "squad.h"
#include "cell.h"

class World {
	const size_t width, height;
	std::vector<std::vector<Cell>> cells;

public:
	World(size_t width, size_t heght);
	friend std::ostream& operator<< (std::ostream& lhs, const World& rhs);
};
