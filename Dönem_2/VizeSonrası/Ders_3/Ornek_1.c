#include <stdio.h>

int main()
{
    int dizi[5] = {1, 2, 3, 4, 5};
    int i, *p;
    p = dizi;

    for (i = 0; i < 5; i++)
        printf("%d %d\n", dizi[i], *p+i);
    
    getch();
    return 0;
}