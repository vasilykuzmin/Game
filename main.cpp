#include <iostream>

#include "world.h"

using namespace std;

int main(void) {
	size_t w, h;
	cout << "Enter height" << endl;
	cin >> h;
	cout << "Enter width" << endl;
	cin >> w;
	World world(w, h);
	cout << world << endl;
	system("pause");
	return 0;
}
