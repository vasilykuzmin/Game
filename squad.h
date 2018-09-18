#pragma once

#include <memory>
#include <string>

#include "damage.h"
#include "health.h"

class World;

class Squad {
protected:
	int damage;
	double armor_hp_ratio;
	std::string damage_type;
	Health health;
public:
	virtual char toChar() = 0;
	virtual Damage calc_damage();
	virtual bool take_damage(Damage damage);

	static std::unique_ptr<Squad> create(std::string type);
};

class Archer : public Squad {
public:
	virtual char toChar() override;
	//virtual Damage calc_damage() override;

	Archer ()
	{
		health.armor = 10;
		health.hp = 20;
		damage_type = "Physics";
		damage = 10;
		armor_hp_ratio = 3;
	}
};

class Draco : public Squad {
public:
	virtual char toChar() override;
	//virtual Damage calc_damage() override;

	Draco()
	{
		health.armor = 30;
		health.hp = 5;
		damage_type = "Physics";
		damage = 10;
		armor_hp_ratio = 1;
	}
};
