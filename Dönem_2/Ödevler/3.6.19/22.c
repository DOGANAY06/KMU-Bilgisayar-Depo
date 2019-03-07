#include <stdio.h>

main()
{
    float point1[2], point2[2], b, c;
    printf("1. noktanin x ve y degerini sirasiyla giriniz\n");
    scanf("%f\n%f", &point1[0], &point1[1]);
    printf("2. noktanin x ve y degerini sirasiyla giriniz\n");
    scanf("%f\n%f", &point2[0], &point2[1]);

    b = (point1[1]-point2[1])/(point1[0]-point2[0]);
    c = -(b * point1[0]) + point1[1];

    printf("y = ");   
    if(b != 1)
        if(b == -1)
            printf("-");  
        else
            printf("%g", b);

    printf("x");  
    
    if(c != 0)
        if(c > 0)
            printf(" + %g", c);
        else
            printf(" - %g", c * -1); 

    getch();
}
