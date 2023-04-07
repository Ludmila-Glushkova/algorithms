#include <iostream>

void quick_sort(int* arr, int size)
{
	int a = 0;
	int left = 0;
	int right = size - 1;
	int mid = arr[(left + right) / 2];

	do
	{
		while (arr[left] < mid) left++;
		while (arr[right] > mid) right--;
		if (left <= right) std::swap(arr[left++], arr[right--]);
	} while (left <= right);

	if (right > 0) quick_sort(arr, right + 1);
	if (left < size) quick_sort(&arr[left], size - left);
}

int main()
{
	int arr[100000]{};
	int n, k;
	std::cin >> n;

	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}

	quick_sort(arr, n);

	std::cin >> k;

	for (int i = 0; i < k; i++)
	{
		int tmp;
		std::cin >> tmp;

		int left = 0;
		int right = n;
		int count = 0;
		while (right - left > 1)
		{
			int mid = (left + right) / 2;
			if (arr[mid] <= tmp) left = mid; else right = mid;
		}
		for (int i = 0; i < right; i++) { if (arr[i] == tmp) count++; }
		std::cout << count << " ";
	}
}