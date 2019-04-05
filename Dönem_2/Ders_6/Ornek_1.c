#include <stdio.h>
#include <string.h>

main()
{
    // char ad[10] = {'A', 'y', 's', 'e', '\0'};
    char ad[10] = "Ayse";
    int i;
    
    // printf("%s", ad);
    // printf("\n%s20", ad);
    // printf("\n%s20.2", ad);
    for(int i = 0; ad[i] != '\0'; i++)
        printf("%c", ad[i]);
    
    getch();
}