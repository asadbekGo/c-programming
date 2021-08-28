// Bubble Sort implementation in C language

#include <stdio.h>

void swap(int *a, int *b) {

	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

void bubblesort(int arr[], int n) {

	for (int i = 0; i < n - 1; i++) 

		for (int j = 0; j < n - i - 1; j++) 

			if (arr[j] > arr[j + 1]) 

				swap(&arr[j], &arr[j + 1]);

}

int main() {

	int arr[] = {3, 6, 10, 1, 4, 2, 5, 9, 7, 8};
	int size = sizeof(arr) / sizeof(arr[0]);

	bubblesort(arr, size);

	printf("Sorted is array: ");
	for (int i = 0; i < size; i++) 
		printf("%d ", arr[i]);
	printf("\n");
}
