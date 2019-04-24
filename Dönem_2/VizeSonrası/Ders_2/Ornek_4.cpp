#include <stdio.h>
#include <conio.h>

int Hesapla(int sayi1, int sayi2)
{
    return sayi1 + sayi2;
}

int Hesapla(int sayi1, int sayi2, int sayi3)
{
    return (sayi1 * sayi2) + sayi3;
}

main()
{
    printf("%d\n", Hesapla(1, 2));
    printf("%d\n", Hesapla(1, 2, 3));
    getch();
}
