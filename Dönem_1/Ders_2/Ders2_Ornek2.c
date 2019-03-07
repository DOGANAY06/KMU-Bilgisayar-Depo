#include <stdio.h>

main()
{
    float sayi1, sayi2, toplam, fark, bolum, carpim;

    printf("1. Sayiyi Giriniz: ");
    scanf("%f", &sayi1);
    printf("2. Sayiyi Giriniz: ");
    scanf("%f", &sayi2);

    toplam = sayi1 + sayi2;
    fark = sayi1 - sayi2;
    bolum = sayi1 / sayi2;
    carpim = sayi1 * sayi2;

    printf("Toplama = %f\nCikarma = %f\nBolme = %f\nCarpma = %f\n", toplam, fark, bolum, carpim);
    getch();
}