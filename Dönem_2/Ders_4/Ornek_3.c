#include <stdio.h>

main()
{
    int dizi1[5] = {2, 5, 8, 9, 5}, boyut;
    boyut = sizeof dizi1 / sizeof * dizi1;
    int dizi2[boyut];

    for(int i = 0; i < boyut; i++)
    {
        dizi2[i] = dizi1[boyut - i - 1];
        printf("%d ", dizi2[i]);
    }

    getch();
}