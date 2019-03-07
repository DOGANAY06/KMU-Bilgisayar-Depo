#include <stdio.h>

main()
{
    float firstNum, secondNum, output;
    int selection;

    printf("Iki Sayi Giriniz\n");
    scanf("%f\n%f", &firstNum, &secondNum);

    printf("(1)Toplama\n(2)Cikarma\n(3)Bolme\n(4)Carpma\nYapilacak Islemin Numarasini Yaziniz\n");
    scanf("%d", &selection);

    switch (selection)
    {
        case 1:
            output = firstNum + secondNum;
            printf("Toplam = %f", output);
            break;
        case 2:
            output = firstNum - secondNum;
            printf("Cikarma = %f", output);
            break;
        case 3:
            output = firstNum / secondNum;
            printf("Bolme = %f", output);
            break;
        case 4:
            output = firstNum * secondNum;
            printf("Carpma = %f", output);
            break;
        default:
            printf("Yanlis Numara Girdiniz");
            break;
    }
    
    getch();
}