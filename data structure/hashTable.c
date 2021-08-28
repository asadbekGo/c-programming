// Implementing hash table in C

#include <stdio.h>
#include <stdlib.h>

struct set {
    int key;
    int data;
};

struct set *array;
int capacity = 10;
int size = 0;


int hashFunction(int key) {
    
    return (key % capacity);
}

void init_array() {

    array = (struct set *)  malloc(capacity * sizeof(struct set));

    for (int i = 0; i < capacity; i++) {
        array[i].key = 0;
        array[i].data = 0;
    }
}

void insert(int key, int data) {

    int index = hashFunction(key);
    
    if (array[index].data == 0) {

        array[index].key = key;
        array[index].data = data;
        size++;
        printf("\nKey (%d) has been inserted\n", key);
    } else if (array[index].key == key)

        array[index].data = data;
    else 
    
        printf("\nCollision occured\n");
}

void remove_element(int key) {

    int index = hashFunction(key);

    if (array[index].data == 0) 
        printf("\nThis key does not exist\n");
    else {
        array[index].key = 0;
        array[index].data = 0;
        size --;
        printf("\nKey (%d) has been removed\n", key);
    }
}

void display() {

    int i;

    for (i = 0; i < capacity; i++) {

        if (array[i].data == 0) 
            printf("\narray[%d]: /", i);
        else
            printf("\nKey: %d array[%d]: %d\t", array[i].key, i, array[i].data);
    }
}

int size_of_hashtable() {

    return size;
}

int main() {

    int choice, key, data, n;
    int c = 0;

    init_array();

    do {
        printf("1.Insert item in the Hash Table"
        "\n2.Remove item from the Hash Table"
        "\n3.Check the size of Hash Table"
        "\n4.Display Hash Table"
        "\n\nPlease enter your choice: "
        );

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Enter key -:\t");
                scanf("%d", &key);
                printf("Enter data -:\t");
                scanf("%d", &data);
                insert(key, data);

                break;
            
            case 2:

                printf("Enter the key to delete-:");
                scanf("%d", &key);

                remove_element(key);
                break;
            
            case 3:

                n = size_of_hashtable();
                printf("Size of Hash Table is-: %d\n", n);
                break;

            case 4:

                display();
                break;

            default:

                printf("Invalied input\n");
        }

        printf("\nDo you want to continue (press 1 for yes):");
        scanf("%d", &c);
    } while (c == 1);
}
