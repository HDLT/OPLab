//файл Put.cpp
#include <iostream>

using namespace std;

void PutZN(double z, int n)
{
	setlocale(LC_ALL, "rus");
	cout << "Значение сложной функции с условием " << z << endl;
	cout << "Номер ветки разветвления " << n << endl;
}