#include <stdio.h>

main()
{
    char cumle[50];
    int harfsayisi = 0, kelimesayisi = 0;

    printf("Cumle Giriniz: ");
    gets(cumle);

    
    // while(cumle[harfsayisi] != '.') //Nokta ile
    while(cumle[harfsayisi] != '\0') // Boşluk ile
    {
        if(cumle[harfsayisi] == ' ')
            kelimesayisi++;
        else
            harfsayisi++;
    }
    
    printf("Harf Sayisi = %d\n", harfsayisi);
    printf("Kelime Sayisi = %d\n", ++kelimesayisi);

    // getch();
}