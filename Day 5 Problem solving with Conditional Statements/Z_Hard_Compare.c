// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/Z

#include <stdio.h>
#include <math.h>

int main()
{
    double A, B, C, D;
    scanf("%lf %lf %lf %lf", &A, &B, &C, &D);

    double left = B * log(A);
    double right = D * log(C);

    if (fabs(left - right) < 1e-12)
        printf("NO");
    else if (left > right)
        printf("YES");
    else
        printf("NO");

    return 0;
}
