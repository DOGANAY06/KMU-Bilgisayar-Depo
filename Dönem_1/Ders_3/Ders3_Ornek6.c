#include <stdio.h>

// 0 - 100 aralığında not girişi yapabilen bir program yazınız
main()
{
    int input;

    do
    {
        printf("Notu giriniz\n");
        scanf("%d", &input);
    } while(input < 0 || input > 100);

    printf("Not = %d", input);
    
    getch();
}