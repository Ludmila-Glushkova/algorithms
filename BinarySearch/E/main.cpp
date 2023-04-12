#include <iostream>
#include <math.h>
#include <iomanip>

typedef long double ld;

int main()
{
    ld a, b, c, d;
    std::cin >> a >> b >> c >> d;
    ld l = -1, r = 1;
    while ((pow(r, 3) * a + pow(r, 2) * b + r * c + d) * (pow(l, 3) * a + pow(l, 2) * b + l * c + d) >= 0)
    {
        r *= 2;
        l *= 2;
    }

    while (r - l > 1e-7)
    {
        ld x;
        x = (l + r) / 2;
        if ((pow(x, 3) * a + pow(x, 2) * b + x * c + d) * (pow(r, 3) * a + pow(r, 2) * b + r * c + d) <= 0) l = x;
        else r = x;
    }
    std::cout << std::fixed << std::setprecision(8) << l;
}
