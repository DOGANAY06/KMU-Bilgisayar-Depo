#include <stdio.h>

void goster(int a, int b)
{
    for(int i = a; i < b; i++)
        if(i % 11 == 0)
            printf("%d\n", i);
}

main()
{
    int sayi1, sayi2;

    printf("Sayi1 = ");
    scanf("%d", &sayi1);
    
    printf("Sayi2 = ");
    scanf("%d", &sayi2);

    goster(sayi1, sayi2);

    getch();
}