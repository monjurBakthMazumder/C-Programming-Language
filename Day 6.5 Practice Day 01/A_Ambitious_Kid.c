// Problem Line: https://codeforces.com/problemset/problem/1866/A

#include <stdio.h>
#include <limits.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x;
    int time = INT_MAX;
    for(int i = 1 ; i <= n; i++){
        scanf("%d", &x);
        if(x < 0){
            x *= -1;
        }
        if(time > x)
        {
            time = x;
        }
    }
    printf("%d", time);
    return 0;
}