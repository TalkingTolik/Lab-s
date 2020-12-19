#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double y, x;
	int i;

	cout << "Введіть x: ";
	cin >> x;
	
	if (x != -2)
	{
		y = 0;

		for (i = 1; i <= 10; i++)
		{
			y += pow(i, 2);
		}
	}
	else {
		cout << "Ділення на нуль неможливе!" << endl;
	}

	cout << "Результат: " << (y + sin(x)) / (x + 2) << endl;
}
