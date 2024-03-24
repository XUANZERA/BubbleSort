#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

void BubbleSort(int arr[], int n)
{
	int i, j, temp;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int nums[3];
	int i;
	scanf("%d %d %d", &nums[0], &nums[1], &nums[2]);
	BubbleSort(nums, 3);
	for (i = 0; i < 3; i++)
	{
		printf("%d ", nums[i]);
	}
	return 0;
}