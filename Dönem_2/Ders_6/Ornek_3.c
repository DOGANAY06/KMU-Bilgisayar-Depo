#include <stdio.h>
#include <string.h>

main()
{
    char cumle[] = "Bilgisayar", yeni[10] = "";

    printf("%s\n%s", cumle, yeni);
    // strcpy(yeni, cumle);
    strncpy(yeni, cumle, 5);
    printf("\n%s\n%s", cumle, yeni);
    
    getch();
}