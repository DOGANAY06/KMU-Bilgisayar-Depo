#include <stdio.h>

void KarakterYazdir(char *ptr);

int main()
{
    char dizi[] = "bilgisayar muhendisligi";
    KarakterYazdir(&dizi);

    getch();
    return 0;
}

void KarakterYazdir(char *ptr)
{
    for (; *ptr != '\0'; ptr++)
        printf("%c", *ptr);
}