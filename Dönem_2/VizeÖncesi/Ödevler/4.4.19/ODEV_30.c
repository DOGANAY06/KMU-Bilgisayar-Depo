#include <stdio.h>

main()
{
    int matrixNumber, lowest;

    printf("Matrisin n sayisini giriniz\n");
    scanf("%d", &matrixNumber);

    int matrix[matrixNumber][matrixNumber];
    
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);
        }
    
    for(int column = 0; column < matrixNumber; column++)
    {
        lowest = matrix[0][column];
        for(int line = 1; line < matrixNumber; line++)
            if(lowest > matrix[line][column])
                lowest = matrix[line][column];
        printf("%d. Kolonun en buyugu: %d\n", column + 1, lowest);
    }
    
        
    getch();
}