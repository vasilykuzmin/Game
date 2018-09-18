#include "cell.h"

#include "squad.h"

using namespace std;

ostream& operator<< (ostream& lhs, const Cell& rhs) {
	if (rhs.squad != nullptr) {
		lhs << rhs.squad->toChar() << ' ';
	} else {
		lhs << ".  ";
	}
	return lhs;
}
