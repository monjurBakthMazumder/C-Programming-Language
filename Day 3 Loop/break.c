#include <stdio.h>

int main() {
    int i, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 5) {
            break; // stop the loop when i is 5
        }
        printf("%d\n", i);
    }

    printf("Loop ended at i = %d\n", i);

    return 0;
}
