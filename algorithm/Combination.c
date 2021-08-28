#include <stdio.h>

int slow_combination(int n) {
    int solution = 0;

    for (int a = 0 ; a <= n; a++) 
        for (int b = 0; b <= n; b++) 
            for (int c = 0; c <= n; c++) 
               if (a + b + c == n) 
                    solution ++;
                
    return solution;
}

int quick_combination(int n) {
    int solution = 0;
    for (int a = 0; a <= n; a++) 
        for (int b = 0; b <= n; b++) {
            int c = n - (a + b);
            if (c >= 0) {
                solution ++;
               // printf("%d\n", solution);
            }
        }
    
    return solution;
}
int main() {
    int n = 0;
    int choice = 0;
    printf("Combinatsiyani tanlang:\n1. Slow Combination\n2. Quick Combination\n");
    scanf("%d", &choice);
    printf("Son kiriting: ");
    scanf("%d", &n);

    switch (choice) {
        case 1:
            printf("%d\n", slow_combination(n));
            break;
        case 2:
            printf("\n%d\n", quick_combination(n));
            break;
        default: 
            printf("Noto'g'ri tanlov !!!");
            break;
    }
    return 0;
}
