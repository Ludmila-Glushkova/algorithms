#include <iostream>
#include <math.h>
#include <iomanip>

typedef long double l;

int main()
{
	l n;
	std::cin >> n;

	l left = 0;
	l right = n;
	l middle = left + ((right - left) / 2);

	while ((right - left) / 2 > 1e-7)
	{
		middle = (right - left) / 2 + left;
		if (middle * middle + sqrt(middle) < n) left = middle;
		else right = middle;
	}
	std::cout << std::setprecision(7) << right;
}