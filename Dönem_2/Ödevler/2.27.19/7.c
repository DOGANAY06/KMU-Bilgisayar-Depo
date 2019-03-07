#include <stdio.h>
#include <math.h>

main()
{
    float radius, height, volume, surface;

    printf("Koninin capini ve yuksekligini sirayla giriniz\n");
    scanf("%f\n%f", &radius, &height);
    
    volume = 3.14 * radius * radius * height / 3;
    surface = 3.14 * radius * (radius + sqrt(height * height + radius * radius));
    printf("Koninin hacmi = %f metre kup\nKoninin yuzey alani = %f metre kare", volume, surface);

    getch();
}
