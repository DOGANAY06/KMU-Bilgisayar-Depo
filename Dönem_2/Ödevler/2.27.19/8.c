#include <stdio.h>

main()
{
    float height, volume, bottomSurface;

    printf("Piramitin taban alanini ve yuksekligini sirayla giriniz\n");
    scanf("%f\n%f", &bottomSurface, &height);
    
    volume = bottomSurface * height / 3;
    printf("Piramitin hacmi = %f metre kup", volume, bottomSurface);

    getch();
}