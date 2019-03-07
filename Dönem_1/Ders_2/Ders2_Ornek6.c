#include <stdio.h>

main()
{
    int sayi;
    printf("Sayiyi Giriniz: ");
    scanf("%d", &sayi);

    if(sayi % 2 == 0)
        printf("Sayi Cifftir");
    else
        printf("Sayi Tektir");
        
    getch();
}