#include <stdio.h>

main()
{
    float temperature;

    printf("Maddenin sicakliklik degerini giriniz: ");
    scanf("%f", &temperature);
    
    if(temperature < 0)
        printf("Kati");
    else if(temperature <= 100)
        printf("Sivi");
    else
        printf("Gaz");

    getch();
}
