#include <stdio.h>

main()
{
    int num, line;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    
    for(line = num; line > 0; line--)
    {
        for(int step = 1; step <= line; step++)
            printf("%d ", step);
        printf("\n");
    }
    
    for(line = 1; line <= num; line++)
    {
        for(int step = 1; step <= line; step++)
            printf("%d ", step);
        printf("\n");
    }
    
    getch();
}