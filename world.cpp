#include "world.h"

#include "squad.h"

using namespace std;

World::World(size_t width_, size_t height_)
	: width(width_)
	, height(height_)
{
	cells.resize(height_);
	for (auto& row : cells) {
		row.resize(width_);
	}
}

void World::addUnit(unique_ptr<Squad> squad, size_t x, size_t y) {
	if (x >= cells.size() || y >= cells[0].size()) {
		return;
	}
	if (cells[x][y].squad == nullptr) {
		cells[x][y].squad = move(squad);
	}
}

ostream& operator<< (ostream& lhs, const World& rhs) {
	for (size_t i = 0; i < rhs.cells.size(); ++i) {
		if (i % 2 == 0) {
			lhs << ' ';
		}
		for (auto& cell : rhs.cells[i]) {
			lhs << cell << ' ';
		}
		lhs << '\n';
	}
	return lhs;
}
