#include <stdio.h>
// Dışarıdan girilen 10 sayının toplamı ve ortalamasını yazın
main()
{
    float input, sum = 0, average;
    
    for(int i = 1; i <= 10; i++)
    {
        printf("%d. sayiyi giriniz: ", i);
        scanf("%f", &input);

        sum += input;
    }

    average = sum / 10;
    printf("Ortalama = %f\nToplam = %f", average, sum);
    
    getch();
}