#include "pch.h"
#include <iostream>

using namespace std;

double Kub()
{
	double d1;
	double f[5];
	for (int i = 0; i != 5; i++)
	{
		cin >> d1;
		f[i] = d1 * d1;
	}
	return f[0] * f[2] - f[1] / f[3] + f[3] * (f[4] - f[0]) - f[1];
}

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Введите 5 чисел" << endl;
	double result = Kub();
	cout << "Результат " << result << endl;
	system("PAUSE");
	return 0;
}