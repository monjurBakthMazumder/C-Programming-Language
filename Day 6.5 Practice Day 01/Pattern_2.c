// Problem Line: https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm86d15s50092r001qeu2gb0t?language=c_103

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(n ; n >=1; n--){
        for(int j =n; j >=1; j--){
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}