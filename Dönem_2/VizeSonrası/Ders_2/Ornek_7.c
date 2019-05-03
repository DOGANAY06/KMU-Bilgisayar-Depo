#include <stdio.h>

void Kalan(int *x, int *y, int *kalan);

void main()
{
    int x = 70, y = 30, kalan = 0;

    printf("x = %d, y = %d, kalan = %d\n", x, y, kalan);
    Kalan(&x, &y, &kalan);
    printf("x = %d, y = %d, kalan = %d\n", x, y, kalan);
    
    getch();
}

void Kalan(int *x, int *y, int *kalan)
{
    *kalan = *x % *y;
}