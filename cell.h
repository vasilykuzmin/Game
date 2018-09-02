#pragma once

#include <memory>
#include <iostream>

class Squad;

enum class Biome {
	EMPTY
};

struct Cell {
	Biome biome;
	std::unique_ptr<Squad> squad;

	friend std::ostream& operator<< (std::ostream& lhs, const Cell& rhs);
};
