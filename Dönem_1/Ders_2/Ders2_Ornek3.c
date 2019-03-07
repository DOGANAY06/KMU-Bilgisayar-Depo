#include <stdio.h>

main()
{
    char isim[25];
    int yas;
    float boy;

    printf("Sirasiyla Isim, Yas ve Boyunuzu Giriniz.\n");
    scanf("%s\n%d\n%f", &isim, &yas, &boy);

    printf("Isminiz = %s\nYasiniz = %d\nBoyunuz = %f", isim, yas, boy);
}