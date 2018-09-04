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

Health Squad::get_health()
{
	return h;
}

unique_ptr<Squad> Squad::create(string type) {
	if (type == "Archer") {
		return make_unique<Archer>();
	} else if (type == "Draco") {
		return make_unique<Draco>();
	}
	return {};
}
