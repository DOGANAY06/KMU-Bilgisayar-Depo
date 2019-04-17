#include <stdio.h>

main()
{
    int dizi[5] = {2, 5, 8, 9, 5}, sayi, sayac = 0;
    
    printf("Sayi giriniz: ");
    scanf("%d", &sayi);

    for(int i = 0; i < 5; i++)
        if(sayi == dizi[i])
        {
            sayac++;
            printf("Sayi = %d dizi[] = %d, i = %d. index\n", sayi, dizi[i], i + 1);
        }

    if(sayac == 0)
        printf("Girdiginiz sayi dizinin icine yok");
    else
        printf("Girdiginiz sayidan dizinin icide %d tane var", sayac);
    
    getch();
}
