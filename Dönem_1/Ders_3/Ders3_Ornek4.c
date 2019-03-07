#include <stdio.h>

// While ile Klavyeden girilen bir tam sayının faktöriyelini hesaplayınız
main()
{
    int input, output = 1;

    printf("Faktoriyeli bulunacak sayiyi giriniz\n");
    scanf("%d", &input);

    while(input > 0)
        output *= input--;

    printf("Sonuc = %d", output);
    
    getch();
}