#include <stdio.h>

#define N 4

int main(void)
{
    int A[N][N];
    unsigned int i = 0;
    unsigned int j = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            A[i][j] = i * N + j + 1;
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
    return 0;
}