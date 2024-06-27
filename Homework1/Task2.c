#include <stdio.h>

int main(void)
{
    int a = 0;
    printf("Введите целое отрицательное число: ");
    if (scanf("%d", &a) == 0)
    {
        printf("Введено не число!\n");
        return 1;
    }
    unsigned int i = 0;
    for (i = 0; i < 8*sizeof(a); i++)
    {
        if ((a & 0x80000000) == 0)
            printf("%c", '0');
        else
            printf("%c", '1');
        a = a << 1;
    }
    return 0;
}