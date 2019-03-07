#include <stdio.h>

main()
{
    int x = 5, y, z;
    y = 6; z = 10;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    y = x;
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    
    z = x++;
    printf("x = %d, y = %d, z = %d\n", x, y, z);

    getch();
}