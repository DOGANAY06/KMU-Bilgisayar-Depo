#include <stdio.h>

main()
{
    char deger[10];
    deger[0] = 'A';
    deger[1] = 'R';
    deger[2] = 'K';
    deger[3] = 'A';
    deger[4] = 0;

    printf("\n%c", deger[0]);
    printf("\n%c", deger[2]);
    printf("\n%s", &deger[2]);
}