#include <stdio.h>

int main(void)
{
    unsigned int a = 0;
    unsigned int b = 0;
    printf("Введите целое положительное число: ");
    if (scanf("%u", &a) == 0)
    {
        printf("Введено не число!\n");
        return 1;
    }
    printf("Введите целое положительное число от 0 до 255: ");
    if (scanf("%u", &b) == 0)
    {
        printf("Введено не число!\n");
        return 1;
    }
    unsigned int i = 0;
    printf("Число до изменения 3-го байта: ");
    a = a & 0xFF00FFFF;
    b = b << 28;
    b = b >> 8;
    a = a | b;
    printf("\nЧисло после изменения 3-го байта: ");
    for (i = 0; i < 8*sizeof(a); i++)
    {
        if ((a & 0x80000000) == 0)
            printf("%c", '0');
        else
            printf("%c", '1');
        a = a << 1;
    }
}