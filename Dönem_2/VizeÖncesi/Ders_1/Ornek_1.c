#include <stdio.h>

main()
{
    int num;
    printf("Bir Sayi Gir: ");
    scanf("%d", &num);
    printf("Girilen Sayi = %d\n", num);

    if(num % 2 == 0)
        printf("Girilen Sayi Cifttir\n");
    else
        printf("Girilen Sayi Tektir\n");

}