// Problem link: https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/U

#include <stdio.h>

int main()
{
    float n;
    scanf("%f", &n);
    int m = n;
    if(n - m == 0){
        printf("int %d", m);
    }else{
         printf("float %d %.3f", m, n-m);
    }
    return 0;
}