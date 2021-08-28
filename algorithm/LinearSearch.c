#include <stdio.h>

int main() {

    int n;
    printf("Listni o'lchamini kiriting: ");
    scanf("%d", &n);

    int a[n];
    printf("Listni elementlarni kiriting:\n");
    for (int i = 0; i < n; i ++) {
        printf("%d element -> ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Listni ko'rinishi: ");
    for (int i = 0; i < n; i++)
        printf("%d ", a[i]);

    int search, flag = 0;
    printf("\nQidirgan elementni kiriting: ");
    scanf("%d", &search);

    for (int i = 0; i < n; i++) {
        if (search == a[i])
            flag = 1;
    }
    if (flag)
        printf("Qidirilgan element listda mavjud: %d\n", search);
    else
        printf("Listda bunday element mavjud emas !!!\n");
    return 0;
}
