#include <stdio.h>
#include <ctype.h>
#include <string.h>

main()
{
    char selection, input[10] = {'\0'};

    do
    {
        printf("[1] Harf\n[2] Rakam\nSeciminiz: ");
        scanf("%d", &selection);
    } 
    while (selection != 1 && selection != 2);
     
    // Yukarıda aldığım değeri bool şeklinde kullanabilmek için 1 eksiltip 
    // kullanıyorum ki bana 0 veya 1 değerini versin. 0 = Harf, 1 = Rakam.
    if(--selection)
    {
        printf("Rakam Giriniz: ");
        scanf(" %s", &input);
        if(strlen(input) > 1 || !isdigit(input[0]))
            printf("%s bir rakam degildir", input);
        else
            printf("%s bir rakamdir", input);
    }
    else
    {
        printf("Harfi Giriniz: ");
        scanf(" %s", &input);
        if(strlen(input) > 1 || !isalpha(input[0]))
            printf("%s bir harf degildir", input);
        else
            printf("%s bir harftir", input);
    }
    
    getch();
}
