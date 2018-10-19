#include <string>

#include "damage.h"
#include "squad.h"
#include "world.h"

using namespace std;

char Archer::toChar() {
	return 'A';
}

char Draco::toChar() {
	return 'D';
}

Damage Squad::calc_damage()
{
	Damage ans;
	double damage_ = (damage + 0.0) / (armor_hp_ratio + 0.0);
	ans.armor_damage = damage_ * armor_hp_ratio;
	ans.hp_damage = damage_;
	return ans;
}

bool Squad::take_damage(Damage damage)
{
	if (damage.armor_damage >= health.armor)
	{
		health.armor = 0;
		health.hp -= damage.armor_damage * 0.6;
	}
	health.hp -= damage.hp_damage;
	if (health.hp <= 0)
		return 1;
	else
		return 0;
}

void Squad::attack(World world, size_t x, size_t y)
{
	Damage squad_damage = calc_damage();
	bool is_dead;
	is_dead = world.cells[x][y].squad->take_damage(squad_damage);
	if (is_dead)
		world.cells[x][y].squad = nullptr;
}

unique_ptr<Squad> Squad::create(string type) {
	if (type == "Archer") {
		return make_unique<Archer>();
	} else if (type == "Draco") {
		return make_unique<Draco>();
	}
	return {};
}
