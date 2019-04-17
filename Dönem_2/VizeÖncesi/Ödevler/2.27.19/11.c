#include <stdio.h>

main()
{
    char karakter, fark;
    printf("Bir karakter giriniz\n");
    scanf("%c", &karakter);
    fark = 'a' - 'A';

    if(karakter < 'a')
        karakter += fark;
    else
        karakter -= fark;

    printf("%c", karakter);
    getch();
}
