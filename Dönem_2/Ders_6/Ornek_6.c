#include <stdio.h>
#include <string.h>

main()
{
    char cumle[] = "Karaman Toki Elmasehir Mahallesi";
    char *ptr;

    ptr = strstr(cumle, "an");

    if(ptr == NULL)
        printf("Eslesme Yok");
    else
        printf("\n%d", ptr - cumle);    
    getch();
}