#include <stdio.h>

int main() {

    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    int del = 0;
    printf("\nO'chirmoqchi bo'lgan elementni yozing: ");
    scanf("%d", &del);
    if (del < 0 || del > size) {
        printf("Bu element soni toplamda yo'q\n");
    } else {
        for (int i = del - 1; i < size; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
        for (int i = 0; i < size; i ++) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");


    return 0;
}
