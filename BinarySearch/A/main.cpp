#include <iostream>

int main()
{
	int arr[100000]{};
	int n, k;
	std::cin >> n >> k;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	for (int i = 0; i < k; i++)
	{
		int tmp;
		std::cin >> tmp;

		int left = 0;
		int right = n - 1;
		while (left < right)
		{
			int mid = (left + right) / 2;
			if (arr[mid] < tmp) left = mid + 1; else right = mid;
		}

		if (arr[left] == tmp) std::cout << "YES" << std::endl;
		else std::cout << "NO" << std::endl;
	}
}