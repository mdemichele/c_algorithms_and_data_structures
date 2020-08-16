#include <stdlib.h>
#include <stdio.h>


void	insertion_sort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int keyValue = arr[i];
		int j = i;
		while (j > 0 && arr[j - 1] > keyValue) {
			arr[j] = arr[j - 1];
			j--;
		}
		arr[j] = keyValue;
	}
}

void print_arr(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");
}

int	main() {
	
	int arr[] = { 1, 2, 5, 8, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	print_arr(arr, n);
	insertion_sort(arr, n);
	print_arr(arr, n);
	
	return 0;
}




