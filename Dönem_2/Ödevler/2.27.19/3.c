#include <stdio.h>

main()
{
    int firstNum, secondNum;

    printf("Buyuk olani bulunacak iki sayiyi sirayla giriniz\n");
    scanf("%d\n%d", &firstNum, &secondNum);

    printf("Büyük olan : %d", (firstNum > secondNum) ? firstNum : secondNum);

    getch();
}
