#include <stdio.h>
#include <stdlib.h>

main()
{
    int *p1, *p2;
    p1 = (int *) malloc(10);
    p2 = p1;
    
    for(int i = 0; i < 10; i++)
        *p2++ = i * 10;
        //p2[i] = i * 10;

    for(int i = 0; i < 10; i++)
        printf("%d\n", *(p1+i));
        // printf("%d\n", p1[i]);
    
    free(p1);
    
    getch();
}
