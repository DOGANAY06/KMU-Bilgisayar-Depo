#include <stdio.h>

main()
{
    char karakter;
    int sayi1, sayi2, toplam = 0;

    do
    {
        printf("Toplanicak iki sayiyi sirasiyla yaziniz.\n");
        scanf("%d\n%d", &sayi1, &sayi2);
        toplam = sayi1 + sayi2;
        printf("Toplam = %d\n", toplam);

        printf("Devam Etmek Icin 'e' veya 'E' tuşuna basınız.\n");
        karakter = getch();
    } while (karakter == 'e' || karakter == 'E');
    
    getch();
}