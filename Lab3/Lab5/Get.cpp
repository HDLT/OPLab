//���� Get.cpp
#include <iostream>

using namespace std;

void GetNum(double& x, double& y, double& a, double& b)
{
	setlocale(LC_ALL, "rus");

	cout << "������� x, y, a, b\n";
	cin >> x >> y >> a>>b;
}