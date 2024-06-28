#include <stdio.h>

#define N 4

int main(void)
{
    int A[N][N];
    unsigned int i = 0;
    unsigned int j = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            if (i + j < N - 1)
                A[i][j] = 0;
            else
                A[i][j] = 1;
    for (i = 0; i < N; i++)
    {
         for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}