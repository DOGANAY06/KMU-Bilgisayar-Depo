#include <stdio.h>

main()
{
    int i, num, sumAll = 0, multiplyOdd = 1, sumEven = 0;

    do
    {
        printf("20'den buyuk bir sayi giriniz: ");
        scanf("%d", &num);
    } 
    while (num <= 20);
    
    for(i = 10; i < num; i++)
        sumAll += i;

    for(i = 5; i < num; i++)
        if(i % 2 == 1)
            multiplyOdd *= i;

    for(i = 14; i < num; i++)
        if(i % 2 == 0)
            sumEven += i;

    printf("10-N Toplam: %d\n5-N Tek Carpim: %d\n14-N Cift Toplam: %d", sumAll, multiplyOdd, sumEven);

    getch();
}
