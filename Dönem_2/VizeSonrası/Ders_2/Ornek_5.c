#include <stdio.h>

int Deneme(int *deger);

main()
{
    int sayi;
    int *psayi;

    printf("Sayiyi giriniz: ");
    scanf("%d", &sayi);
    psayi = &sayi;

    printf("Yeni deger = %d\n", Deneme(psayi));
    printf("Sayinin icerigi = %d\n", sayi);
    
    getch();
}

int Deneme(int *deger)
{
    *deger += 100;
    return *deger;
}