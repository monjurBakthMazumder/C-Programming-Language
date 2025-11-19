#include <stdio.h>

int main() {
    int n, i, sum = 0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += i; // sum = sum + i
    }

    printf("Sum of numbers from 1 to %d is %d\n", n, sum);

    return 0;
}
