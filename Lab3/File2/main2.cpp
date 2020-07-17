//файл main2.cpp
#include <iostream>

void GetNum(double& x, double& y, double& a, double& b);
void PutZN(double, int);
double PathWithMinMax(double x, double y, double a, double b, int& n);

int main()
{
    double x, y, a, b, z;
    int n; // path number 
    GetNum(x, y, a, b);  //вызов функции для ввода данных
    z = PathWithMinMax(x, y, a, b, n); // вызов функции выбора пути
    PutZN(z, n); // вызов функции вывода реузльтатов

    return 0;
}
