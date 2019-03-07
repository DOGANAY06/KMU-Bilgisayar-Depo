#include <stdio.h>
// For ile 0 - 15 arası sayıların ekrana ondalık(decimal), 8lik(oktal), 16lık(hexadecimal) karşılıklarını ekrana yazdırınız
main()
{
    printf("\tOnlu\tSekizli\tOnaltili\n\t----\t-------\t--------\n");
    
    for(int i = 0; i <= 150; i++)
        printf("\t%2d\t%4o\t%5x\n", i, i, i);
    
    // getch();
}