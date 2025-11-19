// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/D

#include <stdio.h>

int main()
{
     long long x, y, z;
     long long sum;
     scanf("%lld %lld %lld %lld", &x, &y, &z, &sum);
     if ((x + y - z) == sum)
     {
          printf("YES");
     }
     else if ((x + y * z) == sum)
     {
          printf("YES");
     }
     else if ((x - y + z) == sum)
     {
          printf("YES");
     }
     else if ((x - y * z) == sum)
     {
          printf("YES");
     }
     else if ((x * y - z) == sum)
     {
          printf("YES");
     }
     else if ((x * y + z) == sum)
     {
          printf("YES");
     }
     else
     {
          printf("NO");
     }
     return 0;
}