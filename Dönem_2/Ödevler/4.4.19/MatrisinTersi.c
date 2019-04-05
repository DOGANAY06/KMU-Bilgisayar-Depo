#include <stdio.h>

main()
{
    int matrixNumber, multiplierLine;
    float number;

    printf("Tersi alinacak matrisinin boyutunu giriniz\n");
    scanf("%d", &matrixNumber);

    float matrix[matrixNumber][matrixNumber], 
        identityMatrix[matrixNumber][matrixNumber];

    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%f", &matrix[line][column]);

            identityMatrix[line][column] = (line == column) ? 1 : 0;
        }
        
    
    for(int column = 0; column < matrixNumber; column++)
    {
        //Gauss-Jordan metodu gereği ilk önce birim matrise eşitleneceği için 1 olacak değeri işliyorum
        number = matrix[column][column];
        for(int i = 0; i < matrixNumber; i++)
        {
            matrix[column][i] /= number;
            identityMatrix[column][i] /= number;
        }

        for(int line = 0; line < matrixNumber; line++)
        {
            if(line == column)
                continue;

            number = matrix[line][column];
            for(int i = 0; i < matrixNumber; i++)
            {
                matrix[line][i] -= number * matrix[column][i];
                identityMatrix[line][i] -= number * identityMatrix[column][i];
            }
        }
    }

    printf("Matrisin Tersi\n");
    for(int line = 0; line < matrixNumber; line++)
    {
        for(int column = 0; column < matrixNumber; column++)
            printf("%g\t", identityMatrix[line][column]);
        printf("\n");
    }
    
    getch();
}