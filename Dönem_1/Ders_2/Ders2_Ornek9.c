#include <stdio.h>

main()
{
    srand(time(NULL));
    int sayi, rastgele = rand() % 100;;
    baslangic:
    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);
    if(sayi == rastgele)
        printf("Dogru Tahmin Ettiniz.");
    else
    {
        if(sayi < rastgele)
            printf("Artir\n");
        else
            printf("Azalt\n");
        goto baslangic;
    }
    
}