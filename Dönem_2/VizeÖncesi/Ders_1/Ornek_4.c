#include <stdio.h>

main()
{
    char *name;
    int a;

    printf("Isminizi Giriniz: \n");
    gets(name);
    
    printf("Kac Kere Yazilacak?\n");
    scanf("%d", &a);
    
    for(int i = 0; i < a; i++)
        printf("%s\n", name);
}