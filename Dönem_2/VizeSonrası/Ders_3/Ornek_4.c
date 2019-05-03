#include <stdio.h>

void Kopyala1(char *metin1, char *metin2);
void Kopyala2(char *metin1, char *metin2);

int main()
{
    char metin1[10], *metin2 = "merhaba";
    char metin3[10], metin4[] = "gule gule";
    
    Kopyala1(metin1, metin2);
    printf("Metin1 = %s\n", metin1);
    Kopyala2(metin3, metin4);
    printf("Metin3 = %s\n", metin3);

    getch();
    return 0;
}

void Kopyala1(char *metin1, char *metin2)
{
    int i;
    for (i = 0; (metin1[i] = metin2[i]) != '\0'; i++);
}

void Kopyala2(char *metin1, char *metin2)
{
    for (; (*metin1 = *metin2) != '\0'; *metin1++, *metin2++);
}
