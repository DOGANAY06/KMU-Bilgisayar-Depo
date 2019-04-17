#include <stdio.h>

main()
{
    int dizi[4][3];
    dizi[2][1] = 5;

    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 3; j++)
            printf("%d ", dizi[i][j]);
        printf("\n");
    }

    
    getch();
}
