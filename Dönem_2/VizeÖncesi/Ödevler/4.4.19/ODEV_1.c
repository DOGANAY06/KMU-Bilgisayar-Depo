#include <stdio.h>

main()
{
    int matrixNumber;

    printf("Siralanacak matrisin n sayisini giriniz\n");
    scanf("%d", &matrixNumber);

    int matrix[matrixNumber][matrixNumber];
    
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);
        }

    for(int column = 0; column < matrixNumber; column++)
        for(int line = 0; line < matrixNumber - 1; line++)
            for(int i = line + 1; i < matrixNumber; i++)
                if(matrix[line][column] < matrix[i][column])
                {
                    matrix[line][column] = matrix[line][column] + matrix[i][column];
                    matrix[i][column] = matrix[line][column] - matrix[i][column];
                    matrix[line][column] = matrix[line][column] - matrix[i][column];
                }

    
    for(int line = 0; line < matrixNumber; line++)
    {
        for(int column = 0; column < matrixNumber; column++)
            printf("%d\t", matrix[line][column]);
        printf("\n");
    }

    getch();
}