#include <stdio.h>

main()
{
    int firstNum, secondNum, thirdNum, temp;

    printf("Buyukten kucuge siralanacak sayilari sirayla giriniz\n");
    scanf("%f\n%f\n%f", &firstNum, &secondNum, &thirdNum);

    if(firstNum < secondNum)
    {
        temp = secondNum;
        secondNum = firstNum;
        firstNum = temp;
    }

    if(firstNum < thirdNum)
    {
        temp = thirdNum;
        thirdNum = firstNum;
        firstNum = temp;
    }

    if(secondNum < thirdNum)
    {
        temp = thirdNum;
        thirdNum = secondNum;
        secondNum = temp;
    }

    printf("%d > %d > %d", firstNum, secondNum, thirdNum);
    getch();
}
