#include <stdio.h>
int grid_path(int n, int m) {
    if (n == 1 || m == 1) 
        return 1;
    else 
        return grid_path(n, m - 1) + grid_path(n - 1, m);
}

int count_partitions(int n, int m) {
    if (n == 0)
        return 1;
    else if (m == 0 || n < 0)
        return 0;
    else
        return count_partitions(n - m, m) + count_partitions(n, m - 1);
}

int main() {

    // int result = grid_path(10, 10);
    // printf("%d \n", result);
    int count_result = count_partitions(9, 5);
    printf("%d\n", count_result);

    return 0;
}
