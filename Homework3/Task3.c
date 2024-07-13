#include <stdio.h>

#define N 10

int main(void)
{
    int A[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *p = A;
    int i;
    for (i = 0; i < N; p++, i++)
    {
        printf("%d\n", *p);
    }
    return 0;
}