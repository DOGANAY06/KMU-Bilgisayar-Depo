#include <stdio.h>

main()
{
    int num;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    
    for(int line = num; line > 0; line--)
    {
        for(int step = 1; step <= line; step++)
            printf("%d ", step);
        printf("\n");
    }
    
    getch();
}