// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
#include "windows.h"
#include <math.h>

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int a, b;
	float h;
	cout << "������ �������� ����� = ";
	cin >> a;
	cout << "������ ����������� ����� = ";
	cin >> b;
	cout << "������ ����� ����� ��������� ���� = ";
	cin >> h;
	float y, x = a;
	while (x <= b)
	{
		y = x * x * x + 2 * log(abs(x) + 3);
		cout << setw(10) <<  "x= " << x << setw(10) << "y= " << y << endl;
		x += h;
	}
}