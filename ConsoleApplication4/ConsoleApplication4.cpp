#include<iostream>
#include<iomanip>
#include "stdio.h"
#include "windows.h"
#include "calc_8.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	// testing calc_a
	{
		double a, x, c;
		//Ввод исходных данных 
		cout << "Тестування calc_a " << endl;
		cout << "Введіть x: ";
		cin >> x;
		cout << "Введіть кут c:";
		cin >> c;
		//Вычисление выражения 
		a = calc_a(x, c);
		//Вывод вычисленных значений с надписями 
		cout<< "A:" << a << endl<<endl;
	}
	
	// testing calc_b
	{
		double b, x, y;
		//Ввод исходных данных 
		cout << "Тестування calc_b " << endl;
		cout<<"Введіть x: ";
		cin>>x;
		cout << "Введіть y:";
		cin >> y;
		//Вычисление выражения 
		b = calc_b(x,y);
		//Вывод вычисленных значений с надписями 
		cout << "B:" << b<<endl << endl;

	}
	// testing calc_c
	{
		int A;
		int l;
		double B,C;
		//Ввод исходных данных
		cout << "Тестування calc_c" << endl;
		cout << "Введіть A:";
		cin >> A;
		cout << "Введіть B:";
		cin >> B;
		//Вычисление выражения 
		C = calc_c(A, B);
		//Вывод вычисленных значений с надписями
		cout << "C:" << C << endl;
	}
	return 0;
}
