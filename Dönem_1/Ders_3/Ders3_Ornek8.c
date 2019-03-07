#include <stdio.h>

// Girilen iki sayı arasındaki sayıları yazdıran programı yazınız
main()
{
    int fNumber, sNumber;
    printf("Sayilari sirayla giriniz\n");
    scanf("%d\n%d", &fNumber, &sNumber);

    for(fNumber; fNumber <= sNumber; fNumber++)
        printf("%d\n", fNumber);

    getch();
}