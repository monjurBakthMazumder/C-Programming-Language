// Problem Link: https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/J

#include <stdio.h>

double calculateAverage(double arr[], int n)
{
    double sum = 0.0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int N;
    scanf("%d", &N);

    double A[N];
    for (int i = 0; i < N; i++)
    {
        scanf("%lf", &A[i]);
    }

    double avg = calculateAverage(A, N);
    printf("%.7lf\n", avg);

    return 0;
}
