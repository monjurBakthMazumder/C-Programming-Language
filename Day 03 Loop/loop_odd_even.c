#include <stdio.h>

int main() {
    int i, n, number;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &number);

        if (number % 2 == 0) {
            printf("%d is even.\n", i);
        } else {
            printf("%d is odd.\n", i);
        }
    }

    return 0;
}
