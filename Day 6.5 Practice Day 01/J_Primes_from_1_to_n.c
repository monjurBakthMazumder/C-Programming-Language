// Problem Line: https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <stdio.h>
#include <stdbool.h>

int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 2; i <= x; i++)
    {

        bool prime = true;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                prime = false;
                break; 
            }
        }
        if( prime){
            printf("%d ", i);
        }
    }
    return 0;
}