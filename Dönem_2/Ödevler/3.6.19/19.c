#include <stdio.h>

main()
{
    int num;
    float   outputs[6]                      =   {0, 0, 0, 0, 0, 0},
            nominatorOffset[6]              =   {5, 2, 1, 2, 1, 1}, 
            denominatorOffset[6]            =   {3, 3, 2, 3, 2, 2}, 
            nominatorIncrease[6]            =   {1, 1, 1, 1, 1, 1}, 
            denominatorIncrease[6]          =   {1, 2, 3, 5, 1, 2}, 
            denominatorIncreasePerStep[6]   =   {0, 0, 2, 2, 0, 0},
            multiplierAtEvens[6]            =   {1, -1, 1, -1, 1, 1};

    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    // 5   6   7
    // - + - + -
    // 3   4   5
    
    for(int tCounter = 0; tCounter < 6; tCounter++)
    {
        for(int i = 0; i < num; i++)
        {
            float multiplier = (i % 2 == 1) ? multiplierAtEvens[tCounter] : 1;
            outputs[tCounter] += nominatorOffset[tCounter] / denominatorOffset[tCounter] * multiplier;
            nominatorOffset[tCounter] += nominatorIncrease[tCounter];
            denominatorOffset[tCounter] += denominatorIncrease[tCounter] + (denominatorIncreasePerStep[tCounter] * i);
        }
        printf("T%d = %g\n", tCounter + 1, outputs[tCounter]);
    }
    getch();
}