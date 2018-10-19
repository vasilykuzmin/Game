#include <iostream>
#include <string>

#include "game.h"

using namespace std;

int main(void) {
	size_t w, h;
	cout << "Enter height" << endl;
	cin >> h;
	cout << "Enter width" << endl;
	cin >> w;
	Game game(h, w);
	while (true) {
#ifdef WIN32
		system("cls");
#else
		system("clear");
#endif

	}
	return 0;
}
