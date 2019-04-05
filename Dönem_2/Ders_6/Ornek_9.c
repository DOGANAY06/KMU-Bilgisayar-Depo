#include <stdio.h>
#include <math.h>

main()
{
    double x = 1.5;
    int y = 5;

    printf("e uzeri %d = %f\n", y, exp(y));
    
    printf("%d'nin karekoku = %f\n", y, sqrt(y));
    
    printf("%d'nin karekoku = %f\n", y, sqrt(y));
    
    printf("%d'nin karesi = %f\n", y, pow(y, 2));
    
    printf("log(%d) = %f\n", y, log(y));
    
    printf("floor(%f) = %f\n", x, log(x));
    
    printf("ceil(%f) = %f\n", x, ceil(x));
    
    printf("fabs(-5) = %f\n", fabs(-5));
    
    printf("ceil(%f) = %f\n", x, ceil(x));
    
    double ondalik, tam;
    ondalik = modf(x, &tam);
    printf("Ondalik = %f, Tam = %f\n", ondalik, tam);
    
    printf("fmod(57.8, 5.5) = %f\n", fmod(57.8, 5.5));

    double deger = 0.5, pi = 3.14;
    printf("Cos(%f) = %f\n", deger, cos(deger) * 180 / pi);
    printf("Sin(%f) = %f\n", deger, sin(deger) * 180 / pi);
    printf("Cosh(%f) = %f\n", deger, cosh(deger) * 180 / pi);
    printf("Sinh(%f) = %f\n", deger, sinh(deger) * 180 / pi);
    printf("Tan(%f) = %f\n", deger, tan(deger) * 180 / pi);

    getch();
}