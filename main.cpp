#include <iostream>

using namespace std;

struct cell
{
	int biome, structure, squad;
};

class World
{
	int size;
	cell field[9][13];
	
	public:
	World(int sz) : size(sz)
	{
		for (int i = 0; i < 9; ++i)
			for (int j = 0; j < 13; ++j)
			{
				//biome >> field[i][j].biome;
				//structure >> field[i][j].structure;

				field[i][j].biome = 0;
				field[i][j].structure = 0;

				field[i][j].squad = 0;
			}
	}

	friend ostream& operator << (ostream& lhs, const World& rhs);
};

ostream& operator << (ostream& lhs, const World& rhs)
{
	for (int i = 0; i < 9; ++i)
	{
		for (int j = 0; j < 13; ++j)
			cout << rhs.field[i][j].squad << ' ';
		cout << endl;
	}
	return lhs;
}

int main(void) 
{
	World w{ 10 };
	cout << w << endl;
	system("pause");
	return 0;
}
