#include <stdio.h>

main()
{
    int i = 1;

    printf("\ni++ = %d", i++);
    printf("\n++i = %d", ++i);
    
    for(i = 1; i <= 10; i++)
        printf("\n%d", i);
    
    getch();
}