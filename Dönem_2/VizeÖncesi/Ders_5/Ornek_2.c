#include <stdio.h>

main()
{
    int dizi1[2][2], dizi2[2][2], toplam[2][2];

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            printf("dizi1[%d][%d] degerini giriniz: ", i, j);
            scanf("%d", &dizi1[i][j]);
        }

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
        {
            printf("dizi2[%d][%d] degerini giriniz: ", i, j);
            scanf("%d", &dizi2[i][j]);
        }

    for(int i = 0; i < 2; i++)
        for(int j = 0; j < 2; j++)
            printf("toplam[%d][%d] degeri = %d\n", i, j, dizi1[i][j] + dizi2[i][j]);

    getch();
}
