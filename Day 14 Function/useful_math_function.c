#include <stdio.h>
#include <math.h>

int main()
{
    int ans1 = ceil(3.5);
    printf("%d\n", ans1);

    int ans2 = floor(3.5);
    printf("%d\n", ans2);

    int ans3 = round(3.5);
    printf("%d\n", ans3);

    double ans4 = sqrt(3);
    printf("%lf\n", ans4);

    int ans5 = pow(3, 2);
    printf("%d\n", ans5);

    int ans = abs(-3);
    printf("%d\n", ans);
    return 0;
}