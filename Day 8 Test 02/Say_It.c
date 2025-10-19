// problem Link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-c-programming-a-batch-08/challenges/say-it

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i<=n ; i++){
        printf("%d. I Want More Assignments\n", i);
    }
    
    return 0;
}