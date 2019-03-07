#include <stdio.h>
#include <math.h>

main()
{
    float num;
    printf("Karesi, kupu ve karekoku yazilacak olan sayiyi Giriniz: ");
    scanf("%f", &num);

    printf("%f'nin\nKaresi = %f\nKupu = %f\nKarekoku = %f\n", num, num * num, num * num * num, sqrt(num));
    getch();
}