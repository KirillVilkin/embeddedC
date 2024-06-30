#include <stdio.h>

#define N 11

int main(void)
{
    int A[N][N];
    unsigned int k = 0;
    unsigned int cur_value = 1;
    for (; k < N/2; k++)
    {
        unsigned int i = k;
        unsigned int j = k;
        for (; i < N - k - 1; i++)
        {
            A[j][i] = cur_value;
            cur_value++;
        }
        for (; j < N - k - 1; j++)
        {
            A[j][i] = cur_value;
            cur_value++;
        }
        for (; i >= k + 1; i--)
        {
            A[j][i] = cur_value;
            cur_value++;
        }
        for (; j >= k + 1; j--)
        {
            A[j][i] = cur_value;
            cur_value++;
        }
    }
    if (N % 2 == 1)
        A[N/2][N/2] = cur_value;
    unsigned int i = 0;
    unsigned int j = 0;
    for (; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", A[i][j]);
        printf("\n");
    }
    return 0;
}