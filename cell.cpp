#include "cell.h"

using namespace std;

ostream& operator<< (ostream& lhs, const Cell& rhs) {
	lhs << '.';
	return lhs;
}
