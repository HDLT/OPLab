//���� � ��������� ������� ������

#include <iostream>
#include <cmath>
using namespace std;

//������� ����������� ���������
double Factorial(double n)
{
    return n <= 1 ? 1 : n * Factorial(n - 1);
}

//������� ����������� ������� ����
double Func(double x, double n)
{
    return pow(-1, n) * (pow(x, 2 * n) / Factorial(2 * n));
}

//������� ������������� �������� � ���������� ����� �������� ����
double MeCos(double x, double e, int n)
{
    double a = Func(x, n);
    return abs(a) > e ? a + MeCos(x, e, n + 1) : 1;
}

//������� ���������� ������� �������� �� �������� � ���������� ������ �������� ����
double Start(double x, double e)
{
    double rez = MeCos(x, e, 1);
    return rez;
}