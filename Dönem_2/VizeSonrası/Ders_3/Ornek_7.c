#include <stdio.h>
#include <math.h>

float *KareKokAl(float sayi);

int main()
{
    float sayi = 15, *p;
    p = KareKokAl(&sayi);
    printf("Sonuc = %f", *p);

    getch();
    return 0;
}

float *KareKokAl(float *sayi)
{
    *sayi = sqrtf(*sayi);
    return sayi;
}
