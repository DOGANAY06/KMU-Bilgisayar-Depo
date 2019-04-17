#include <stdio.h>

main()
{
    int matrixNumber, biggest;

    printf("Matrisin n sayisini giriniz\n");
    scanf("%d", &matrixNumber);

    int matrix[matrixNumber][matrixNumber];
    
    for(int line = 0; line < matrixNumber; line++)
        for(int column = 0; column < matrixNumber; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);
        }
    
    for(int line = 0; line < matrixNumber; line++)
    {
        biggest = matrix[line][0];
        for(int column = 1; column < matrixNumber; column++)
            if(biggest < matrix[line][column])
                biggest = matrix[line][column];
        printf("%d. Satirin en buyugu: %d\n", line + 1, biggest);
    }
    
        
    getch();
}