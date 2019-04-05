#include <stdio.h>
#include <stdlib.h>

main()
{
    char sayi1[] = "1.25", deger[] = "12 numarali ogrenci", sayi2[] = "155";

    printf("%f\n", atof(sayi1));
    printf("%f\n", atof(deger));

    printf("%d\n", atoi(sayi2));
    
    getch();
}