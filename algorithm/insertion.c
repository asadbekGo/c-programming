#include <stdio.h>

int main() {

	int a[] = {2, 4, 5, 1, -1, 0, 8};

	int size = sizeof(a) / 4;

	for (int i = 1; i < size; i++) {
		int j = i;

		while ((a[j] < a[j - 1]) && j > 0) {

			int temp = a[j];
			a[j] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d ", a[i]);
	}
}

