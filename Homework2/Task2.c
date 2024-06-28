#include <stdio.h>

#define N 1

int main(void)
{
    int A[N];
    int temp = 0;
    unsigned i = 0;
    for (i = 0; i < N; i++)
    {
        A[i] = i + 1;
    }
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);
    printf("\n");
    for (i = 0; i < N/2; i++)
    {
        temp = A[i];
        A[i] = A[N - i - 1];
        A[N - i - 1] = temp;
    }
    for (i = 0; i < N; i++)
        printf("%d ", A[i]);
    return 0;
}