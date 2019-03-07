#include <stdio.h>

main()
{
    int sayi;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &sayi);
    for(int i = 1; i <= sayi; i++)
    {
        for(int j = 0; j < i; j++)
            printf("%d ", i);
        printf("\n");
    }
}