//файл calcul1.cpp
#include <cmath>

double DefPath(double x, double y, double a, double b, int& n)
{
	double z; // создаём локальную переменную функции
	if (x < y)
	{
		z = a - cos(x);
		double z1 = a / (b+y), z2 = (1-cos(2*y))/2;
		if (z1 < z)
			z = z1;
		if (z2 < z)
			z = z2;
		n = 1;
	}
	else 
		if (x < y + 5)
		{
			double z1=a*a*a, z2=log((x*x)+(y*y));
			if (z1 > z2)
				z = z1;
			else
				z = z2;
			n = 2;
		}
		else
		{
			z = a + ((3 * cos(x - y) + cos(3 * (x - y))) / 4);
			n = 3;
		}
	return z;
}