#include <iostream>
#include "game.h"
#include "ddl.h"
#pragma comment(lib, "Dll.lib")
using namespace std;

int main(int argc, char * argv[])
{
	cout << "argc: " << argc << endl;

	if (argc == 1)
	{

		cout << "no argv" << endl;
		return 0;
	}

	if (strcmp(argv[1], "game") == 0) 
	{
		cout << "game begin" << "\n";
		GAME::m_game();
	}
}