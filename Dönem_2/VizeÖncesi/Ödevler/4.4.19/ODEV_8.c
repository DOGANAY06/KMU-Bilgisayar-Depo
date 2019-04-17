#include <stdio.h>

main()
{
    int matrixNumber, negativeCount = 0, negativeCounter = 0, positiveCount = 0, positiveCounter = 0;

    printf("Matrisin n sayisini giriniz\n");
    scanf("%d", &matrixNumber);

    int matrix[matrixNumber][matrixNumber];
    
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);
            if(matrix[line][column] >= 0)
                positiveCount++;
            else
                negativeCount++;
        }

    int B[positiveCount], C[negativeCount];

    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
            if(matrix[line][column] >= 0)
                B[positiveCounter++] = matrix[line][column];
            else
                C[negativeCounter++] = matrix[line][column];
    

    printf("\nB Dizisi\n");
    for(int i = 0; i < positiveCount; i++)
        printf("%d. eleman: %d\n", i + 1, B[i]);

    printf("\nC Dizisi\n");
    for(int i = 0; i < negativeCount; i++)
        printf("%d. eleman: %d\n", i + 1, C[i]);
    
    getch();
}