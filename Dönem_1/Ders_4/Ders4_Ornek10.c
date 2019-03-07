#include <stdio.h>
// Dışarıdan -1 girilene kadar olan sayıların toplamı ve ortalamasını yazın
main()
{
    int input, sum = 0, average, count = 0;
    
    while (1)
    {
        printf("%d. sayiyi giriniz: ", count + 1);
        scanf("%d", &input);
        if(input == -1) 
            break;
        count++;
        sum += input;
    }

    average = sum / count;
    printf("Ortalama = %d\nToplam = %d", average, sum);

    // getch();
}