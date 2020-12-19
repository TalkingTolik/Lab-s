#include <iostream>
#include "windows.h"
#include "math.h"

using namespace std;

int main()
{
	double y, x;
	int i;

	cout << "Enter x: ";
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
		cout << "Invalid values!" << endl;
	}

	cout << "Result: " << (y + sin(x)) / (x + 2) << endl;
}
