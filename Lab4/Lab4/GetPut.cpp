//файл GetPut.cpp  с ф-циями ввода и вывода

#include <iostream>
#include <cmath>
using namespace std;

//функция ввода
void GetXE(double& x, double& e)
{
	setlocale(LC_ALL, "rus");

	cout << "Введите значение x: ";
	cin >> x;
	cout << "Введите точность: ";
	cin >> e;
}

//функция вывода
void Put(double rez,double x)
{
	setlocale(LC_ALL, "rus");

	cout << "Вычислили значение cos(0.6) ввоспользовавшись разложением в ряд, результат - " << rez<<endl;
	cout << "Результат полученный с помощью соответствующей библиотечной функции - " << cos(x)<<endl;
}