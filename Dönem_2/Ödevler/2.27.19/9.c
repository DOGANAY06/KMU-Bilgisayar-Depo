#include <stdio.h>

main()
{
    float x, y, z, volume, surface;

    printf("Dikdortgen prizmasinin boyutlarini sirasiyla giriniz\n");
    scanf("%f\n%f\n%f", &x, &y, &z);
    
    volume = x * y * z;
    surface = 2 * (x * y + x * z + y * z);
    printf("Dikdortgen prizmasinin hacmi = %f metre kup\nDikdortgen prizmasinin yuzey alani s= %f metre kare", volume, surface);

    getch();
}