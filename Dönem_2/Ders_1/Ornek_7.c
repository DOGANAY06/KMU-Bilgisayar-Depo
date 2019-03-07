#include <stdio.h>

main()
{
    int num;
    printf("Bir Sayi Gir: ");
    scanf("%d", &num);
    printf("Girilen Sayi = %d\n", num);

    (num % 2 == 0) ? printf("Girilen Sayi Cifttir") : printf("Girilen Sayi Tektir");
}