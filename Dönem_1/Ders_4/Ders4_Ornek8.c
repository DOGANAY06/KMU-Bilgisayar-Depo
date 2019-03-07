#include <stdio.h>
// Dışarıdan girilen sayıyı çarpanlarına ayıran kodu yazınız
main()
{
    int input, constInput, counter = 2;

    printf("Sayiyi giriniz:\n");
    scanf("%d", &input);
    constInput = input;
    
    for(counter = 2; counter <= constInput; counter++)
        while(input % counter == 0)
        {
            input /= counter;
            printf("%d\n", counter);
        }
    
    getch();
}