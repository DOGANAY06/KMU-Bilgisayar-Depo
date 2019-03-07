#include <stdio.h>

main()
{
    int x = 0, y = 1, sayi, i, yeni;

    printf("Adim Sayisini Giriniz: ");
    scanf("%d", &sayi);

    printf("%d\n%d\n", x, y);
    
    // for(i = 2; i < sayi; i++)
    for(i = 0; i < sayi - 2; i++)
    {
        printf("%d\n", x + y);
        yeni = x;
        x = y;
        y = yeni + x;
    }
    
    getch();
}