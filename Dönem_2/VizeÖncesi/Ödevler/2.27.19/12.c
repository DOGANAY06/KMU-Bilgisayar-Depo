#include <stdio.h>

main()
{
    int num;

    printf("Sayiyi giriniz: ");
    scanf("%d", &num);
    
    if(num < 0)
        num *= -1;

    printf("Mutlak degeri = %d", num);
    getch();
}
