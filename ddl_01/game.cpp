#include <iostream>
#include <stdlib.h>//�����ͷ�ļ�
#include <time.h> 
#include "game.h"
using namespace std;

int numbergame::m_game()
{
	int RandomNumber;
	srand((unsigned)time(NULL));
	RandomNumber = rand() % 100 + 1; //100���ڵ������
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

