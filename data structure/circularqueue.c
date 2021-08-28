// Circular Queue implementation in C

#include <stdio.h>

#define SIZE 5

int items[SIZE];
int front = -1, rear = -1;

// Queue ni to'lganligini tekshirish
int isFull() {

    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
    return 0;
}

// Queue ni bo'shligini tekshirish
int isEmpty() {
    
    if (front == -1) return 1;
    return 0;
}

// Element qo'shish
void enQueue(int element) {

    if (isFull())
        printf("\nQueue is full!! \n");
    else {
        if (front == -1) 
            front = 0;
        rear = (rear + 1) % SIZE;
        items[rear] = element;
        printf("\nInserted -> %d", element);
    }
}

// Element o'chirish
int deQueue() {

    int element;
    if (isEmpty()) {
        printf("\nQueue is empty !! \n");
    } else {
        element = items[front];
        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % SIZE;
        }

        printf("\nDeleted element -> %d \n", element);
    }
}

void display() {

    int i;
    if (isEmpty())
        printf("\nEmpty Queue\n");
    else {
        printf("\nFront -> %d ", front);
        printf("\nItems -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE) {
            printf("%d ", items[i]);
        }
        printf("%d ", items[i]);
        printf("\nRear -> %d \n", rear);
    }
}

int main() {

    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    enQueue(6);

    display();
    deQueue();

    display();

    enQueue(7);
    display();

    enQueue(8);

    return 0;
}