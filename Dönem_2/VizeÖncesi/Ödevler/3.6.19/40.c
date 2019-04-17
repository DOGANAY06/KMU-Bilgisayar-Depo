#include <stdio.h>

main()
{
    int num;
    printf("Adim sayisini giriniz: ");
    scanf("%d", &num);
    
    for(int lineCounter = 0; lineCounter < num; lineCounter++)
    {
        for(int columnCounter = num; columnCounter > lineCounter; columnCounter--)
            printf(" ");
        printf("*");

        if(lineCounter != 0)
        {
            if(lineCounter == num - 1)
                for(int i = 0; i < lineCounter * 2; i++)
                    printf("*");
            else
            {
                for(int i = 0; i < (lineCounter - 1) * 2 + 1; i++)
                    printf(" ");
                printf("*");
            }
        }
        printf("\n");
    }
    
    getch();
}