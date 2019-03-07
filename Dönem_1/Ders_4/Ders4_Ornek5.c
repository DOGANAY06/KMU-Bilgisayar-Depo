#include <stdio.h>

main()
{
    // for(int i = 1; i <= 10; i += 2)
    //     printf("%d\n", i);

    for(int i = 0; i <= 10; i++)
    {
        if(i % 2 == 0)
            continue;
        printf("%d\n", i);
    }
    
    getch();
}