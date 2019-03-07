#include <stdio.h>

main()
{
    int a = 5, b = 10;
    printf("a = %d, b = %d", a, b);
    a = a + 1;  printf("\na = %d", a);
    a += 1;     printf("\na = %d", a);
    a++;        printf("\na = %d", a);
    ++a;        printf("\na = %d", a);
    b = a++;    printf("\na = %d, b = %d", a, b);
    b = a + 1;  printf("\na = %d, b = %d", a, b);
    b += a;     printf("\na = %d, b = %d", a, b);
    getch();
}