#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Customer
    fname
    sname
    age
    workplace
    salary
*/

struct Customer {
    char fname[20];
    char sname[20];
    char workplace[50];
    int age;
    float salary;
    struct Customer *next;
};

void printList(struct Customer *s) {
    while (s != NULL) {
        printf(
            "%10s | %15s| %15s| %d, %f\n", 
            s->fname, 
            s->sname, 
            s->workplace, 
            s->age, 
            s->salary);
        s = s -> next;
    }
}

int main() {
    struct Customer *first;
    struct Customer *second = NULL;
    struct Customer *third = NULL;

    first = (struct Customer *) malloc(sizeof(struct Customer));
    second = (struct Customer *) malloc(sizeof(struct Customer));
    third = (struct Customer *) malloc(sizeof(struct Customer));

    strcpy(first -> fname, "Abbos");
    strcpy(first -> sname, "Suyunov");
    strcpy(first -> workplace, "Facebook Inc.");
    first -> age = 21;
    first -> salary = 102000.67;

    strcpy(second -> fname, "Asadbek");
    strcpy(second -> sname, "Ergashev");
    strcpy(second -> workplace, "LinkedIn");
    second -> age = 21;
    second -> salary = 99000.54;

    strcpy(third  -> fname, "Fayozbek");
    strcpy(third  -> sname, "Eshonboyev"); 
    strcpy(third  -> workplace,"Apple");
    third -> age = 23;
    third -> salary = 54000.12;

    first -> next = second;
    second -> next = third;
    third -> next = NULL;

    printList(first);

    return 0;
}
