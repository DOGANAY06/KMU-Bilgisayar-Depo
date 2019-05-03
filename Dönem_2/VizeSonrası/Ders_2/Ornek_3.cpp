#include <stdio.h>
#include <conio.h>

int Kare(int sayi)
{
    return sayi * sayi;
}

float Kare(float sayi)
{
    return sayi * sayi;
}

void main()
{
    int sayi1 = 5;
    float sayi2 = 1.5;

    printf("Kare(%d) = %d\n", sayi1, Kare(sayi1));
    printf("Kare(%g) = %g\n", sayi2, Kare(sayi2));
    getch();
}
