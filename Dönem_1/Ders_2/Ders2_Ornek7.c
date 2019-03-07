#include <stdio.h>

main()
{
    int sayi;
    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    if(sayi > 0)
        printf("Sayi Pozitiftir");
    else if(sayi < 0)
        printf("Sayi Negatiftir");
    else
        printf("Sayi Sifirdir");
        
    getch();
}