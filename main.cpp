#include <iostream>
#include <string>

#include "world.h"

using namespace std;

int main(void) {
	size_t w, h;
	cout << "Enter height" << endl;
	cin >> h;
	cout << "Enter width" << endl;
	cin >> w;
	World world(w, h);
	while (true) {
#ifdef WIN32
		system("cls");
#else
		system("clear");
#endif
		cout << "Unit placement mode" << endl;
		cout << "Current world state:" << endl << world << endl;
		cout << "Enter new squad type and position: ";

		string type;
		size_t x, y;
		cin >> type >> x >> y;
		world.addUnit(Squad::create(type), x, y);
	}
	return 0;
}
