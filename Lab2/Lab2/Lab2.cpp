
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");

    double x, y, f;
    int k, m, n, i;
    cout << "Ввод х= ";
    cin >> x;
    cout << endl << "Ввод у= ";
    cin >> y;
    
    f = pow(5.2, 3) * (log10(x + y) / (x - (1 / 0.45 * sin(x - 8 * y)))) + 0.5;

    k = f; // неявное преобразование в целочисленное
    i = ceil(f); //округление в большую сторону
    m = floor(f); // округление в меньшую сторону
    n = static_cast<int>(f); // явнео преобразоваине в целый тип

    cout << endl << "f = "<<f;
    cout << endl << "Округление в большую сторону i= "<<i;
    cout << endl << "Целая часть m= " << m;
    cout << endl << "Целое k= " << k;
    cout << endl << "Целое n= " << n;
    cout << endl << "Значение префиксного выражения ++k= " << ++k;
    cout << endl << "Значения постфиксного выражения n++= " << n++;
    cout << endl << "Значение после приращения k= " << k;
    cout << endl << "Значение после приращения n= " << n<<endl;
}

