#include <stdlib.h>
#include <stdio.h>


void	insertion_sort(int *arr)
{
	int marker;
	int i;
	int temp;

	marker = 1;

	while (arr[marker])
	{
		i = marker;
		while (arr[i] < arr[i - 1] && i > 0)
		{	
			temp = arr[i];
			arr[i] = arr[i - 1];
			arr[i - 1] = temp;
			i--;
		}
		marker++;
	}
}

//Test Main

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
	insertion_sort(ARRAY);

	for (int i = 0; i < ARRAY_LENGTH; i++)
	{
		printf("%d, ", ARRAY[i]);
	}

	printf("\n");

	return (0);
}




