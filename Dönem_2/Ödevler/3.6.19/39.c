#include <stdio.h>

main()
{
    int num;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++)
    {
        for(int j = i; j >= 1; j--)
            printf("%d ", j);
        printf("\n");
    }
}