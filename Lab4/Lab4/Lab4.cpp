//файл main.cpp :

#include <iostream>

void GetXE(double& x, double& e);
void Put(double rez,double x);
double Start(double x, double e);

int main()
{
    double x, e,rez;
    GetXE(x, e);    //вызов функции ввода
    rez = Start(x, e);  //вызов функции вычисления косинуса через ряд Тейлора
    Put(rez,x); //вызов функции вывода

    system("pause");
    return 0;
}


