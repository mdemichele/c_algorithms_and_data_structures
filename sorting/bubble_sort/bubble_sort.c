
#include <stdlib.h>
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
				arr[j + 1] = temp;		
			}
			j++;
		}
		i++;	
	}
}

// Test Main

int	main()
{
	int *ARRAY;
	int continue_filling;
	int ARRAY_LENGTH, is_sorted, TEMP;
	
	ARRAY = NULL;
	continue_filling = 1;
	ARRAY_LENGTH = 0;

	while (continue_filling)
	{
		printf("Insert a value into the array (current size: %d)\n", ARRAY_LENGTH + 1);
		ARRAY = (int *)realloc(ARRAY, sizeof(int) * (ARRAY_LENGTH));
		scanf("%d", &ARRAY[ARRAY_LENGTH]);
		ARRAY_LENGTH += 1;
		printf("Do you want to add another value (1: Yes/ 0: No, sort it!)?\n");
		scanf("%d", &continue_filling);
	}

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("%d, ", ARRAY[i]);
	}

	printf("\n");
	printf("sorted: \n");
	bubble_sort(ARRAY);

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("%d, ", ARRAY[i]);
	}

	return (0);
}
