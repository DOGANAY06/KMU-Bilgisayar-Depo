#include <stdio.h>

main()
{
    float radius, height, volume;

    printf("Silindirin capini ve yuksekligini sirayla giriniz\n");
    scanf("%f\n%f", &radius, &height);
    
    volume = 3.14 * radius * radius * height;
    printf("Silindirin hacmi = %f metre kup", volume);

    getch();
}
