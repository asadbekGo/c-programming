#include <stdio.h>

void BubbleSort(int arr[], int size) {
	for (int i = 0; i < size - 1; i ++) {
		for (int j = 0; j < size - 1; j ++) {
			if (arr[j] > arr[j + 1]) {
				arr[j] = arr[j] ^ arr[j + 1];
				arr[j + 1] = arr[j] ^ arr[j + 1];
				arr[j] = arr[j] ^ arr[j + 1];
			}
		}
	}
}
int main() {
	
	int arr[] = {3, 45, 23, 9, 12, 65, 32, 75, 1};
	int size = sizeof(arr) / 4;
	printf("Array\n");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	BubbleSort(arr, size);
	printf("\nArray Sorting:\n");
	for (int i = 0; i < size; i ++)
		printf("%d ", arr[i]);

	int search = 0;
	printf("\nSearch in array element: ");
	scanf("%d", &search);
	int low = 1, mid, high = size, find = 0;
	while (low <= high) {
		mid = (low + high) / 2;
		if (search < arr[mid])
			high = mid - 1;
		else if (search > arr[mid]) 
			low = mid + 1;
		else {
			find = 1;
			break;
		}
	}

	if (find)
		printf("Searching %d Successful\n", search);
	else
		printf("Searching %d is not Successful\n", search);
		
	return 0;
}

