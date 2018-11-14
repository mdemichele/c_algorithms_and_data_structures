
#include <stdio.h>

void	bubble_sort(int *arr)
{
	int i;
	int j;
	int temp;

	i = 0;
	while (arr[i])
	{
		j = 0;
		while (arr[j + 1])
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = arr[j];		
			}
			j++;
		}
		i++;	
	}
}

// Test Main

int	main()
{
	int test[] = {1, 4, 3, 2, 5};
	int i;

	i = 0;
	bubble_sort(test);
	while (test[i] != '\0')
	{
		printf("%d\t", test[i]);
		i++;
	}
}
