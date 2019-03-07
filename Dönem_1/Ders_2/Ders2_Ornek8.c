#include <stdio.h>

main()
{
    int sayi;
    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    if(sayi % 2 == 0 && sayi % 3 == 0)
        printf("Sayi 2 ve 3'e tam bolunuyor");
    else
        printf("Sayi 2 ve 3'e tam bolunmuyor");
}