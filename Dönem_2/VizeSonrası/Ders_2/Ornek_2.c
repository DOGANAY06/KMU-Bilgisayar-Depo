#include <stdio.h>
#include <math.h>

int Mutlak(int sayi);

void main()
{
    int sayi;

    printf("Mutlagi alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    // sayi = Mutlak(sayi);

    printf("Math.h abs(%d) = %d\n", sayi, abs(sayi));
    printf("Mutlak(%d) = %d\n", sayi, Mutlak(sayi));
    getch();
}

int Mutlak(int sayi)
{
    if(sayi < 0)
        sayi *= -1;

    return sayi;
}