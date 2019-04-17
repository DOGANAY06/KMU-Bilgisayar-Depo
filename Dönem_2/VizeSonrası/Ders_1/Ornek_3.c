#include <stdio.h>

int topla(int a, int b)
{
    // int sonuc;
    // sonuc = a + b;
    // return sonuc;
    return a + b;
}

main()
{
    int sayi1, sayi2, toplam;

    printf("Sayi1 = ");
    scanf("%d", &sayi1);
    
    printf("Sayi2 = ");
    scanf("%d", &sayi2);

    // toplam = sayi1 + sayi2;
    // printf("%d + %d = %d", sayi1, sayi2, toplam);
    printf("%d + %d = %d\n", sayi1, sayi2, topla(sayi1, sayi2));
    printf("%d + %d = %d\n", 5, 3, topla(5, 3));
    printf("%d + %d = %d\n", 2, 10, topla(2, 10));

    
    getch();
}