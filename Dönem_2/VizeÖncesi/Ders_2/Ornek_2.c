#include <stdio.h>

main()
{
    int sayi;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &sayi);
    for(int i = 1; i <= sayi; i++)
    {
        printf("%d ", i);
        for(int j = 1; j <= i; j++)
            printf("%d", i);
        printf("\n");
    }
}