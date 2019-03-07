#include <stdio.h>

main()
{
    int dizi[5] = {4, 12, 9, 152, 124}, min = dizi[0], max = dizi[0];

    printf("Dizi Min Max\n");

    for(int i = 1; i < 5; i++)
    {
        if(dizi[i] > max)
            max = dizi[i];
        if(dizi[i] < min)
            min = dizi[i];
        printf("%d - %4d - %4d\n", dizi[i], min, max);
    }

    printf("Minimun =%d\nMaksimum = %d", min, max);
}
