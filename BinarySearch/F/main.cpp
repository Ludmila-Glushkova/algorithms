#include<iostream>

int main()
{
    int n, k;
    std::cin >> n >> k;
    int* arr = new int [n] {};
    for (int i = 0; i < n; ++i)
        std::cin >> arr[i];
    int l = 1, r = 1e9;
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        int count = 0;
        for (int i = 0; i < n; ++i)
            count += arr[i] / m;
        if (count >= k) l = m;
        else r = m;
    }
    std::cout << l;
    delete[] arr;
}
