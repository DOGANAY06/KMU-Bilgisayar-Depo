#include <stdio.h>

main()
{
    int firstDigit, secondDigit, sum;

    for(int i = 1; i <= 99; i++)
    {
        firstDigit = i % 10;
        secondDigit = (i - firstDigit) / 10;
        sum = firstDigit + secondDigit;
        if(sum % 2 == 1)
            printf("%d sayisinin basamaklari toplami = %d\n", i, sum);
    }
    getch();
}