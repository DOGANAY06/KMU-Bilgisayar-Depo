#include <stdio.h>

main()
{
    int i;

    for(i = 100; i >= 50; i--)
        if(i % 3 == 0)
            printf("%d\n", i);

    i = 100;
    
    while(i >= 50)
    {
        if(i % 3 == 0)
            printf("%d\n", i);
        i--;
    }
    
    getch();
}