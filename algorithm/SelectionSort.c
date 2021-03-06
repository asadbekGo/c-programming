#include <stdio.h>

void selectionSort(int arr[], int size) {


    for (int i = 0; i < size - 1; i ++) {

        int min_index = i;
        
        for (int j = i + 1; j < size; j++) {

            if (arr[j] < arr[min_index])
                min_index = j;
        }

        if (min_index != i) {

            int temp = arr[min_index];
            arr[min_index] = arr[i];
            arr[i] = temp;
        }
    }
}

int main() {

    int arr[] = {6, 2, 1, 7, 9, 0, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    printf("Sorted array: \n");
    for (int i = 0; i < size; i ++) 
        printf("%d ", arr[i]);
    printf("\n");

}