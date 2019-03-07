#include <stdio.h>

main()
{
    int num;
    
    do
    {
        printf("ASCII karsiligi verilecek sayiyi giriniz(0-255): ");
        scanf("%d", &num);
    } while (num <= 0 || num >= 255);
    
    printf("%d sayinin ASCII karsiligi = %c", num, num);
    getch();
}
