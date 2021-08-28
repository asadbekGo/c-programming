#include <stdio.h>
#include <stdlib.h>

// DYNAMIC MEMORY ALLOCATION 
// malloc() -- calloc() -- realloc() -- free()

int main() {

    int *array;
    int size;
    scanf("%d", &size);

    // array = (int *)malloc(size * sizeof(float)); // Allocate SIZE bytes of memory
    array = (int *) calloc(sizeof(int), size);

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");
    scanf("%d", &size);
    array = (int *) realloc(array, size * sizeof(int));
    for(int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d ", array[i]);
    }
    printf("\n");
    free(array);
    for (int i = 0; i < size; i++) 
        printf("%d ", array[i]);

    return 0;
}

