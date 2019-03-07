#include <stdio.h>

main()
{
    int num, half;

    printf("Sayiyi Giriniz: ");
    scanf("%d", &num);

    half = num / 2;
    for(int i = 1; i <= half; i++)
        if(num % i == 0)
            printf("%d\n", i);
            
    printf("%d\n", num);
}