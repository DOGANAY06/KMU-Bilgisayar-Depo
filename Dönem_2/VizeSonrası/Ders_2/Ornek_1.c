#include <stdio.h>

char* SehirBul(char plaka)
{
    switch (plaka)
    {
        case 70:
            return "Karaman";

        case 34:
            return "Istanbul";

        case 42:
            return "Konya";
        
        default:
            return "Sehir Bilinmiyor";
    }
}

void sehir_bul(int sayi)
{
    if(sayi == 70)
        printf("Karaman\n");
    else if(sayi == 34)
        printf("Istanbul\n");
    else if(sayi == 42)
        printf("Konya\n");
    else 
        printf("Plaka bilinmiyor\n");
}

main()
{
    char plaka;

    printf("Plaka numarasini giriniz: ");
    scanf("%d", &plaka);

    printf("%s\n", SehirBul(plaka));
    sehir_bul(plaka);
    getch();
}
