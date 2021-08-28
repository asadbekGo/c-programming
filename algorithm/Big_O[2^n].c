#include <stdio.h>

int count = 0;
int func(int n) {
    count ++;
    if (n == 1) 
        return 1;
    else 
        return func(n - 1) + func(n - 1);
}
int main() {

    printf("%d\n%d\n", count, func(10));

    return 0;
}
