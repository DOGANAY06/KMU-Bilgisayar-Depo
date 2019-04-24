#include <stdio.h>

void YerDegistir(int *x, int *y);

main()
{
    int x = 10, y = 30;

    printf("x = %d, y = %d\n", x, y);
    YerDegistir(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    
    getch();
}

void YerDegistir(int *x, int *y)
{
    int gecici;
    gecici = *x;
    *x = *y;
    *y = gecici;
}