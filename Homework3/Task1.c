#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    printf("Введите два положительных числа через пробел (первое число - 4 байта, второе число - 1 байт):");
    if (scanf("%d %d", &a, &b) != 2)
    {
        printf("Входные данные некорректны!");
    }
    char *byte_pointer_a = (char *)&a; 
    byte_pointer_a = byte_pointer_a + 2;
    *byte_pointer_a = b;
    printf("Число после изменения 3-го байта", a);
    return 0;
}
