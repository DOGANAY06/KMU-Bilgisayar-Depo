#include <stdio.h>

main()
{
    int input, output = 1;

    printf("Faktoriyeli bulunacak sayiyi giriniz\n");
    scanf("%d", &input);

    do
    {
        output *= input--;
    } while(input > 0);
    
    printf("Sonuc = %d", output);
    
    getch();
}