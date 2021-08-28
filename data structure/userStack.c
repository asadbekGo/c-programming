#include <stdio.h>
#include <stdlib.h>
#define MAX 10

int count = 0;
struct stack {
    int item[MAX];
    int top;
};

typedef struct stack st;

void createStack(st *s) {
    s -> top = -1;
}

int isfull(st *s) {

    if (s -> top == MAX - 1) {

        return 1;
    }

    return 0;
}

void push(st *s, int newitem) {

    if (isfull(s)) {

        printf("Stack Full\n");
    } else {

        s -> top++;
        s -> item[s -> top] = newitem;
    }
    count ++;
}

int isempty(st *s) {

    if (s -> top == -1) {

        return 1;
    }

    return 0;
}

void pop(st *s) {

    if (isempty(s)) {

        printf("Stack is Empty\n");
    } else {

        printf("Popped item: %d\n", s -> item[s -> top]);
        s -> top--;
    }
    
    count --;
}

void display(st *s) {

    if (isempty(s))
        printf("Stack is empty\n");
    else {
        printf("Stack:\n");
        for (int i = count - 1; i >= 0; --i) {

            printf("%d ", s -> item[i]);
        }
    }

}





int main() {

    st *s= (st *) malloc(sizeof(st));

    createStack(s);

    printf("Stack Data Structure\n");
    int loop = 1;
    while (loop > 0) {

        int choice;
        printf("\n1. Display\n2. Push item\n3. Pop item\n4. Exit\n");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                display(s);
                    break;
            case 2: {
                int newitem;
                printf("Input item: ");
                scanf("%d", &newitem);
                push(s, newitem);
                    break;
            }
            case 3:
                pop(s);
                    break;
            case 4:
                exit(0);
                    break;
            default:
                printf("Other choice\n");
        }
    }



    return 0;
}