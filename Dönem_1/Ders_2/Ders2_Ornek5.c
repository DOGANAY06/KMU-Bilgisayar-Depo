#include <stdio.h>

main()
{
    char isim[5];
    printf("Isminizi Yaziniz: ");
    gets(isim);
    scanf("\n%5s", &isim);
    printf("Isminiz = %s\n", isim);
    puts(isim);
    getch();
}