#include <stdio.h>

main()
{
    for(int i = 1; i <= 10; i++)
        printf("%d'nin toplami = %d\n", i, fonksiyon(i));
}

int fonksiyon(int number)
{
    int sum = 0;
    for(int i = 0; i < number; i++)
        sum += i;
    return sum;
}