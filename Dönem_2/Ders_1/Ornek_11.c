#include <stdio.h>

main()
{
    for(int i = 1; i <= 10; i++)
    {
        int sum = 0;
        for(int j = 0; j < i; j++)
            sum += j;
        printf("%d'nin toplami = %d\n", i, sum);
    }
}