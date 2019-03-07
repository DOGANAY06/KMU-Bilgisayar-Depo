#include <stdio.h>

// Ekrandan girilen sayının basamak sayısını bularak yazdırınız
main()
{
    int input, counter = 0;
    printf("Sayiyi giriniz\n");
    scanf("%d", &input);

    do
    {
        input /= 10;
        counter++;
    } while(input > 0);

    printf("Basamak Sayisi = %d", counter);
    
    getch();
}