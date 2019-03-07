#include <stdio.h>

main()
{
    char kr;

    printf("Bir harf giriniz: ");
    scanf("%c", &kr);

    if( kr == 'A' || kr == 'E' || kr == 'I' || kr == 'İ' || 
            kr == 'U' || kr == 'Ü' || kr == 'O' || kr == 'Ö' || 
                kr == 'a' || kr == 'e' || kr == 'i' || kr == 'i̇' || 
                    kr == 'u' || kr == 'ü' || kr == 'o' || kr == 'ö')
        printf("Seslidir");
    else
        printf("Sessizdir");
        
    getch();
}