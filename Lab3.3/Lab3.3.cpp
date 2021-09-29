// Lab_03_3.cpp
// < Фігура Тарас >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 12
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -6)
		  y = R;
	  else
	if (-6 < x && x <= -R)
		  y = (-R + x) / (R + 6);
	  else
	if (x > -R && x <= 0)
	   	  y = R - sqrt(R * R - (x + R));
	  else
	if (x > 0 && x <= R)
		  y = sqrt(R * R - x * x);
	  else
		  y = -(x) + R;

	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
