#include <stdio.h>
#include <time.h>
#define monthCount 12

main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int day, month, year, dayCounter = 0, yearCounter = 0;
    int monthDays[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31, 29};

    do
    {
        printf("Dogum tarihinizi sirasiyla sayisal olarak gun ay ve yil seklinde giriniz\n");
        scanf("%d\n%d\n%d", &day, &month, &year);
        month -= 1;
        year -= 1900;

        if(month < 0 || month > monthCount || day < 0 || day > monthDays[month] || year > tm.tm_year)
            printf("Tarih gecerli degildir. Dogru bir tarih giriniz\n");
    } while (month < 0 || month > monthCount || day < 0 || day > monthDays[(year % 4 == 0) ? 12 : month] || year > tm.tm_year);
    
    
    while(day != tm.tm_mday)
    {
        if(day > tm.tm_mday)
        {
            day--;
            dayCounter--;
        }
        else
        {
            day++;
            dayCounter++;
        }
    }
    
    while(month != tm.tm_mon)
    {
        if(month > tm.tm_mon)
        {
            dayCounter -= monthDays[month];
            month--;
        }
        else
        {
            dayCounter += monthDays[month];
            month++;
        }
    }

    if(dayCounter < 0)
        yearCounter--;

    while(year != tm.tm_year)
    {
        // printf("Gun: %d Ay: %d GunSayac: %d, Yil: %d\n",day,  month, dayCounter, year + 1900);
        dayCounter += (year++ % 4 == 0) ? 366 : 365;
        yearCounter++;
    }
    
    printf("%d yasindasiniz ve dogdugunuzdan beri %d gun gecti\n", yearCounter, dayCounter);
        
    getch();
}