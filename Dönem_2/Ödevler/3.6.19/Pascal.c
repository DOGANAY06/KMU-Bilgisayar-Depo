#include <stdio.h>

main()
{
    int num, nominator = 1, denominator = 1;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    
    for(int step = 0; step < num; step++)
    {
        for(int number = 0; number <= step; number++)
        {
            nominator = 1; 
            denominator = 1;
            for(int i = 1; i <= step; i++)
                nominator = nominator * i;

            for(int i = 1; i <= number; i++)
                denominator = denominator * i;
            
            for(int i = 1; i <= step - number; i++)
                denominator = denominator * i;

            printf("%d ", nominator / denominator);
        }
        printf("\n");
    }
    
    getch();
}