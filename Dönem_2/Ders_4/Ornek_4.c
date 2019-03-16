#include <stdio.h>

main()
{
    int dizi[5] = {2, 5, 8, 9, 5}, sayi, gecici;

    for(int i = 0; i < 5 / 2; i++)
    {
        gecici = dizi[i];
        dizi[i] = dizi[4 - i];
        dizi[4 - i] = gecici;
    }
    for(int i = 0; i < 5; i++)
        printf("%d ", dizi[i]);
    
    getch();
}
