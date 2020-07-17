//файл calcul2.cpp
#include <cmath>

// функци€ дл€ вы€влени€ меньшего из двух
double min(double x, double y)
{
	return (x < y) ? x : y;
}


// функци€ дл€ вы€влени€ большего из двух
double max(double x, double y)
{
	return (x > y) ? x : y;
}

double PathWithMinMax(double x, double y, double a, double b, int& n)
{
	double z; 
	if (x<y)
	{
		z = min(a - cos(x), min(a / (b + y), (1 - cos(2 * y)) / 2));
		n = 1; // path number
	}
	else
		if (x < y + 5)
		{
			z = max(a * a * a, log((x * x) + (y * y)));
			n = 2; 
		}
		else
		{
			z = a + (3 * cos(x - y) + cos(3 * (x - y)) / 4);
			n = 3;
		}
	return z;
}