#include <stdio.h>

main()
{
    for(int i = 1; i <= 5; i++)
        printf("---%d---\t", i);
    printf("\n");
    
    for(int i = 1; i <= 10; i++)
    {
        for(int j = 1; j <= 5; j++)
            printf("%dx%d=%d\t", j, i, i * j);
        printf("\n");
    }

    printf("\n\n");

    for(int i = 6; i <= 10; i++)
        printf("---%d---\t", i);
    printf("\n");

    for(int i = 1; i <= 10; i++)
    {
        for(int j = 6; j <= 10; j++)
            printf("%dx%d=%d\t", j, i, i * j);
        printf("\n");
    }
    getch();
}