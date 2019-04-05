#include <stdio.h>

main()
{
    int matrixLine, matrixColumn, positiveCount = 0;

    printf("A matrisinin satir ve sutun sayilarini sirayla giriniz\n");
    scanf("%d\n%d", &matrixLine, &matrixColumn);

    int matrix[matrixLine][matrixColumn];
    
    for(int line = 0; line < matrixLine; line++)
        for(int column = 0; column < matrixColumn; column++)
        {
            printf("Matris[%d, %d] = ", line, column);
            scanf("%d", &matrix[line][column]);
        }
    
    for(int line = 0; line < matrixLine; line++)
        for(int column = 0; column < matrixColumn; column++)
            if(matrix[line][column] > 0)
                positiveCount++;
    
    printf("A matrisinde %d tane pozitif sayi var", positiveCount);
        
    getch();
}