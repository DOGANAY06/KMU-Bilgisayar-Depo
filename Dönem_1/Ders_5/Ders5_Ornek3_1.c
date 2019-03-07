#include <stdio.h>

main()
{
    char karakter;
    int harfsayisi = 0, kelimesayisi = 0;

    printf("Cumle Giriniz: ");
    scanf("%c", &karakter);

    
    // while(karakter != '\0') // Boşluk ile
    while(karakter != '.') // Nokta ile
    {
        if(karakter == ' ')
            kelimesayisi++;
        else
            harfsayisi++;
        scanf("%c", &karakter);
    }
    
    
    printf("Harf Sayisi = %d\n", harfsayisi);
    printf("Kelime Sayisi = %d\n", ++kelimesayisi);

    getch();
}