#include <stdio.h>

void AdresGoster(int *dizi[]);

int main()
{
    int Ankara[2] = {0, 1};
    int Istanbul[2] = {2, 3};
    int Karaman[2] = {4, 5};
    int *tablo[] = {Ankara, Istanbul, Karaman};
    AdresGoster(tablo);
    getch();
    return 0;
}

void AdresGoster(int *dizi[])
{
    int i, j;

    for (i = 0; i < 3; i++)
        for (j = 0; j < 2; j++)
            printf("i = %d, j = %d, dizi elemani = %d, dizi adresi = %p\n", i, j, dizi[i][j], &dizi[i][j]);
}