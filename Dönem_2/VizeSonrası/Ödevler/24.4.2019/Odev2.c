#include <stdio.h>
#include <math.h>

float Calculate(char operation, float firstValue, float secondValue)
{
    float result = 0;
    switch (operation)
    {
        case '1':
            result = firstValue + secondValue;
            break;
        case '2':
            result = firstValue - secondValue;
            break;
        case '3':
            if(secondValue == 0)
            {
                printf("0 ile bolunme hatasi. Tekrar Deneyiniz\n");
                result = 0;
                break;
            }
            result = firstValue / secondValue;
            break;
        case '4':
            result = firstValue * secondValue;
            break;
        case '5':
            result = pow(firstValue, secondValue);
            break;
        default:
            printf("Lutfen girdiginiz islemin numarasini kontrol ediniz\n");
            break;
    }
    return result;
}

main()
{
    char selection;
    float firstNumber, secondNumber;

    while (1)
    {
        printf("\n[1] Toplama\n[2] Cikarma\n[3] Bolme\n[4] Carpma\n[5] Us Alma\n[6] Cikis\nSeciminiz: ");
        scanf(" %c", &selection);

        if(selection == '6')
            break;

        printf("1. Sayiyi giriniz: ");
        scanf("%f", &firstNumber);
        printf("2. Sayiyi giriniz: ");
        scanf("%f", &secondNumber);
        
        printf("Sonuc = %g\n", Calculate(selection, firstNumber, secondNumber));
        getch();
    } 
    
    printf("Cikiliyor...");
    getch();
}
