#include <stdio.h>
#include <string.h>

main()
{
    char ilk[10] = "Bilgi", son[10] = "merkezi", birlesim[20] = "";

    printf("%s %s\n", ilk, son);
    
    strcat(birlesim, ilk);
    printf("%s\n", birlesim);

    strcat(birlesim, " ");
    printf("%s\n", birlesim);
    
    // strcat(birlesim, son);
    strncat(birlesim, son, 3);
    printf("%s\n", birlesim);
    
    getch();
}