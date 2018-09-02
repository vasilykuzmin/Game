#include "squad.h"

using namespace std;

char Archer::toChar() {
	return 'A';
}

char Draco::toChar() {
	return 'D';
}

unique_ptr<Squad> Squad::create(string type) {
	if (type == "Archer") {
		return make_unique<Archer>();
	} else if (type == "Draco") {
		return make_unique<Draco>();
	}
	return {};
}
