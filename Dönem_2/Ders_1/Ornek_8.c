#include <stdio.h>

main()
{
    for(int i = 0; i < 5; i++)
        for(int j = 0; j < 5; j++)
            printf("i = %d\tj = %d\n", i, j);
}