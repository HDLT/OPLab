//файл main3.cpp

#include <iostream>

using namespace std;

void GetNum(double& x, double& y, double& a, double& b);
void PutZN(double, int);
double DefPath(double x, double y, double a, double b, int& n);
double PathWithMinMax(double x, double y, double a, double b, int& n);

int main()
{
	setlocale(LC_ALL, "rus");

	double x, y, a, b, z;
	int n;	//path number

	GetNum(x, y, a, b);  //вызов функции для ввода данных

	int choice; // выбранный вариант решения
	
	cout << "1 - с вложенными разветвленниями";
	cout << "без дополнитльной функции мин. и макс.\n";
	cout << "2- с доп. функциямии мин. и макс.\n";
	cout << "Ваш выбор: ";
	cin >> choice;
	switch (choice)
	{
	case 1:
		z = DefPath(x,y,a,b,n); // вызов функции 1 способа
		break;
	case 2:
		z = PathWithMinMax(x, y, a, b, n); //вызов функции 2 способа
		break;
	default:
		cout << "Вы ввели что-то не то!";
		cout << "Конец" << endl;

		return 0;
	}

	PutZN(z, n); // вызов функции вывода реузльтатов

	return 0;

}

