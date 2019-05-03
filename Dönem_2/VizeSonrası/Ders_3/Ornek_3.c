#include <stdio.h>

double Ortalama(char dizi[], int boyut);

int main()
{
    double dizi[5] = {1.1, 2.2, 3.3, 4.4, 5.5};
    double ort;
    ort = Ortalama(dizi, 5);
    printf("Ortalama = %lf\n", ort);

    getch();
    return 0;
}

double Ortalama(char dizi[], int boyut)
{
    int i;
    double *p, sonuc = 0;
    p = dizi;
    for (i = 0; i < boyut; i++)
        sonuc += *p+i;
    return sonuc / boyut;
}