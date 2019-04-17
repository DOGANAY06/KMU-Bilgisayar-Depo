#include <stdio.h>

main()
{
    int multiplicandLine, multiplicandColumn, multiplierLine, multiplierColumn, productLine, productColumn;

    do
    {
        printf("Carpilan matrisinin satir ve sutun sayilarini sirayla giriniz\n");
        scanf("%d\n%d", &multiplicandLine, &multiplicandColumn);

        printf("Carpan matrisinin satir ve sutun sayilarini sirayla giriniz\n");
        scanf("%d\n%d", &multiplierLine, &multiplierColumn);

        if(multiplicandColumn != multiplierLine)
            printf("Carpilan matrisin sutun sayisi, Carpan matrisin satir sayisina esit degil!\n Tekrar yaziniz\n");
    } 
    while (multiplicandColumn != multiplierLine);
    
    productLine = multiplicandLine;
    productColumn = multiplierColumn;
    
    float   multiplicand[multiplicandLine][multiplicandColumn], 
            multiplier[multiplierLine][multiplierColumn],
            product[productLine][productColumn];

    for(int line = 0; line < multiplicandLine; line++)
        for(int column = 0; column < multiplicandColumn; column++)
        {
            printf("Carpilan[%d, %d] = ", line, column);
            scanf("%f", &multiplicand[line][column]);
        }

    for(int line = 0; line < multiplierLine; line++)
        for(int column = 0; column < multiplierColumn; column++)
        {
            printf("Carpan[%d, %d] = ", line, column);
            scanf("%f", &multiplier[line][column]);
        }

    for(int line = 0; line < productLine; line++)
        for(int column = 0; column < productColumn; column++)
        {
            product[line][column] = 0;
            for(int i = 0; i < multiplicandColumn; i++)
                product[line][column] += multiplicand[line][i] * multiplier[i][column];
        }
    
    for(int line = 0; line < productLine; line++)
    {
        for(int column = 0; column < productColumn; column++)
            printf("%g\t", product[line][column]);
        printf("\n");
    }
                        
    
    getch();
}