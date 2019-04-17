#include <stdio.h>
#define mak 5
#define yaz printf

main()
{
    int i;
    int dizi[mak] = {20, 30, 50, 10, 5};

    for(i = 0; i < mak; i++)
        yaz("\n%d", i);
        // printf("\n%d", i);
    
}