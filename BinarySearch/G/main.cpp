#include<iostream>

int main()
{
    int n, x, y;
    std::cin >> n >> x >> y;
    if (x > y) std::swap(x, y);

    int l = x - 1;
    int r = n * y + 1;

    while (r - l > 1)
    {
        int m = (l + r) / 2;
        int t = m - x;
        if ((t / x + t / y) + 1 >= n) r = m;
        else l = m;
    }
    std::cout << r;
}