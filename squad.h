#pragma once

#include <memory>

class Squad {
public:
	virtual char toChar() = 0;

	static std::unique_ptr<Squad> create(std::string type);
};

class Archer : public Squad {
public:
	virtual char toChar() override;
};

class Draco : public Squad {
public:
	virtual char toChar() override;
};
