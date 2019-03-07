#include <stdio.h>

main()
{
    int i = 1;

    for(i = 1; i <= 10; i++)
    {
        printf("\n%d", i);
        if(i == 5) break;
    }
    
    getch();
}