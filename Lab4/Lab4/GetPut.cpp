//���� GetPut.cpp  � �-����� ����� � ������

#include <iostream>
#include <cmath>
using namespace std;

//������� �����
void GetXE(double& x, double& e)
{
	setlocale(LC_ALL, "rus");

	cout << "������� �������� x: ";
	cin >> x;
	cout << "������� ��������: ";
	cin >> e;
}

//������� ������
void Put(double rez,double x)
{
	setlocale(LC_ALL, "rus");

	cout << "��������� �������� cos(0.6) ����������������� ����������� � ���, ��������� - " << rez<<endl;
	cout << "��������� ���������� � ������� ��������������� ������������ ������� - " << cos(x)<<endl;
}