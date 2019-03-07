#include <stdio.h>

main()
{
    float firstSide, secondSide, thirdSide;

    printf("Ucgenin kenarlarini sirayla giriniz\n");
    scanf("%f\n%f\n%f", &firstSide, &secondSide, &thirdSide);
    
    if(firstSide == secondSide && secondSide == thirdSide)
        printf("Eskenardir");
    else if(firstSide != secondSide && firstSide != thirdSide && secondSide != thirdSide)
        printf("Cesitkenardir");
    else
        printf("Ikizkenardir");

    getch();
}
