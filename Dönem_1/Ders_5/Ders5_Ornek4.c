#include <stdio.h>

main()
{
    int sayi1, sayi2, i;

    printf("1. Sayiyi Giriniz: ");
    scanf("%d", &sayi1);
    printf("2. Sayiyi Giriniz: ");
    scanf("%d", &sayi2);

    for(i = 1; i <= sayi1 * sayi2; i++)
        if(i % sayi1 == 0 && i % sayi2 == 0)
        {
            printf("OKEK = %d\n", i);
            break;
        }

    for(i = sayi1 + sayi2; i > 0; i--)
        if(sayi1 % i == 0 && sayi2 % i == 0)
        {
            printf("OBEB = %d", i);
            break;
        }
    
    getch();
}