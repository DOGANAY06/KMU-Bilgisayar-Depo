#include <stdio.h>
#include <string.h>

main()
{
    char cumle[] = "Karaman Toki Elmasehir Mahallesi";
    char *ilk, *son;

    ilk = strchr(cumle, 'a');
    son = strrchr(cumle, 'a');

    if(ilk != NULL || ilk != NULL)
        printf("Ilk Nokta = %d\nIkinci Nokta = %d", ilk - cumle, son - cumle);
    else
        printf("Eslesme Yok");
    
    getch();
}