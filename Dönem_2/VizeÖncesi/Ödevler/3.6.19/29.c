#include <stdio.h>
#define monthCount 12
main()
{
    int day, month, year;
    int monthDays[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 29};

    printf("Tarihi sirasiyla sayisal olarak gun ay ve yil seklinde giriniz\n");
    scanf("%d\n%d\n%d", &day, &month, &year);
    month -= 1;

    if(year % 4 == 0)
        month += monthCount - 1;

    if(month <= 0 || month > monthCount || day < 0 || day > monthDays[month])
        printf("Tarih gecerli degildir");
    else
        printf("Tarih gecerlidir");
        
    getch();
}