#include <iostream>
#include "ddl.h"
using namespace std;

//相同的内存地址

int GAME::m_game()
{
	int RandomNumber;
	srand((unsigned)time(NULL));
	RandomNumber = rand() % 100 + 1; //100以内的随机数
	int x = 0;
	cin >> x;
	while (x != rand())
	{
		if (x < rand())
			cout << "it is too small" << endl;
		else
			cout << "it is too big" << endl;

		cin >> x;
	}
	cout << "you are right" << endl;
	return 0;
}