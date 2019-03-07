#include <stdio.h>

main()
{
    int i = 0, sesliMi = 0;
    char character, sesliler[10] = "euoaiEUIOA"; // Türkçe Karakterler 2 char alanı kapladığı için dahil etmedim
    
    // Karakter girişi
    printf("Karakteri Giriniz\n");
    scanf("%c", &character);

    // "sesliler" dizimdeki her bir karakteri kullanıcının girdiği karakter ile karşılaştırarak
    // girilen karakterin sesli olup olmadığını kontrol edip, sesli ise döngüden çıkarıyorum.
    for(i = 0; i < 10; i++)
        if(character == sesliler[i])
        {
            sesliMi = 1;
            break;
        }
    
    if(sesliMi)
        printf("Seslidir");
    else
        printf("Sessizdir");

    getch();
}