#include <stdio.h>
#include <stdlib.h>

main()
{
    int matrixNumber, *numbers, numbersCount = 0;
    char isExists = 0; // Hocam hile olacak ama ben bu kodu Boolsuz nasıl yazacağım en ufak fikrim yok.

    numbers = (int *) malloc(sizeof(int) * numbersCount);

    printf("Matrisin n sayisini giriniz\n");
    scanf("%d", &matrixNumber);

    int matrix[matrixNumber][matrixNumber];
    
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            isExists = 0;
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);

            for(int i = 0; i < numbersCount; i++)
                if(*(numbers + i) == matrix[line][column])
                {
                    isExists = 1;
                    break;
                }
                
            if(!isExists)
            {
                numbers = realloc(numbers, sizeof(int) * ++numbersCount);
                numbers[numbersCount - 1] = matrix[line][column];
            }
        }

    int numberList[numbersCount][2];

    for(int i = 0; i < numbersCount; i++)
    {
        numberList[i][0] = numbers[i];
        numberList[i][1] = 0;
    }
    
    free(numbers);
        
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
            for(int i = 0; i < numbersCount; i++)
                if(matrix[line][column] == numberList[i][0])
                    numberList[i][1]++;

    for(int i = 0; i < numbersCount; i++)
        printf("%d sayisindan %d tane var\n", numberList[i][0], numberList[i][1]);
    
    getch();
}