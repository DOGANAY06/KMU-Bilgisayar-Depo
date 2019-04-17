#include <stdio.h>

main()
{
    int boyut;
    char metin[50];
    gets(metin);
    printf("Metin Giriniz\n");
    boyut = strlen(metin);

    for(int i = boyut - 1; i >= 0; i--)
        printf("%c", metin[i]);
    
    getch();
}
