#include <stdio.h>

int main(void)
{
    unsigned int a = 0;
    unsigned int count = 0;
    printf("Введите целое положительное число: ");
    if (scanf("%u", &a) == 0)
    {
        printf("Введено не число!\n");
        return 1;
    }
    unsigned int i = 0;
    for (i = 0; i < 8*sizeof(a); i++)
    {
        if ((a & 1) == 1)
            count++;
        a = a >> 1;
    }
    printf("Число единиц в двоичной записи положительного числа: %u\n", count);
    return 0;
}