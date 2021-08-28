#include <stdio.h>

void shellSort(int arr[], int size) {

	int interval = size / 2;
	int temp, j;

	while (interval > 0) {

		for (int i = interval; i < size; i++) {

			temp = arr[i];
			j = i;
			
			while (j >= interval && arr[j - interval] > temp) {

				arr[j] = arr[j - interval];
				j -= interval;
			}

			arr[j] = temp;
		}	

		interval /= 2;
	}
}



int main() {


	int arr[] = {3, 5, 1, 2, 6, 34,12, 54, 10};

	int size = sizeof(arr) / sizeof(arr[0]);

	shellSort(arr, size);

	for (int i = 0; i < size; i++) {

		printf("%d ", arr[i]);
	}
}
