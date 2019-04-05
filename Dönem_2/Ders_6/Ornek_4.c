#include <stdio.h>
#include <string.h>

main()
{
    char ilk[10] = "Maymun", son[10] = "Maytap";
    int sonuc;
    sonuc = strcmp(ilk, son);

    printf("%d\n", sonuc);
    printf("%d\n", strcmp(ilk, son));
    printf("%d\n", strncmp(ilk, son, 3));

    if(sonuc > 0)
        printf("%s, &s'den büyüktür", ilk, son);
    else if( sonuc < 0)
        printf("%s, &s'den kücüktür", ilk, son);
    else
        printf("%s ile &s esittir", ilk, son);
    
    getch();
}