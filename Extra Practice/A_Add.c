// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int sum = add(X, Y);
    printf("%d\n", sum);

    return 0;
}
