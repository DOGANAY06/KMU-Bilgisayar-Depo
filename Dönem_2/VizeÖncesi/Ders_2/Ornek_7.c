#include <stdio.h>

main()
{
    int dizi[5];
    for(int i = 0; i < 5; i++)
    {
        printf("%d. elemani giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d. elemani = %d\n", i + 1, dizi[i]);
    }

}