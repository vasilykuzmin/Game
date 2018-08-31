#include <iostream>

using namespace std;

class World
{
	int size;
	
public:
	World(int sz) : size(sz)
	{}

	friend ostream& operator << (ostream& lhs, const World& rhs);
};

ostream& operator << (ostream& lhs, const World& rhs)
{
	lhs << rhs.size;
	return lhs;
}

int main(void) 
{
	World w{ 10 };
	cout << w << endl;
	system("pause");
	return 0;
}
