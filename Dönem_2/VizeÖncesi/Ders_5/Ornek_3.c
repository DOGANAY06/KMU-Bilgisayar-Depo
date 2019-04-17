#include <stdio.h>

main()
{
    int dizi1[2][2], tekDizi[4] = {0}, sayac = 0;

    srand(time(NULL));

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            dizi1[i][j] = rand() % 100;
            printf("dizi1[%d][%d] = %d  ", i, j, dizi1[i][j]);
            if(dizi1[i][j] % 2 == 1)
                tekDizi[sayac++] = dizi1[i][j];
        }
        printf("\n");
    }

    for(int i = 0; i < 4; i++)
        printf("%d ", tekDizi[i]);
    
    getch();
}
