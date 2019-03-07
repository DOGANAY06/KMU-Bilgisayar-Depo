#include <stdio.h>
#define charLimit 5

main()
{
    srand(time(NULL));
    char character, randomChar[charLimit];

    for(int i = 0; i < charLimit; i++)
            randomChar[i] = rand() % 25 + 97;

    printf("Lutfen kucuk karakter kullanininiz!\n");
        
    for(int i = 0; i < charLimit; i++)
    {
        do
        {
            printf("%d. karakteri giriniz: ", i + 1);
            scanf("%c", &character);

            if(character != randomChar[i])
                if(character < randomChar[i])
                    printf("Alfabetik olarak daha buyuk bir sayi girmelisin.\n");
                else
                    printf("Alfabetik olarak daha kucuk bir sayi girmelisin.\n");
        } while (character != randomChar[i]);
        printf("%d. karakteri buldun! Dogru karakter %c idi!", i + 1, randomChar[i]);
        
        printf("\nKelime: ");
        for(int j = 0; j <= i; j++)
            printf("%c", randomChar[j]);
        printf("\n");
    }
    printf("Kelimeyi buldunuz tebrikler!");
    getch();
}