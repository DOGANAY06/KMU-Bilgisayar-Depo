#include <stdio.h>

main()
{
    int num, counter = 1, newLineCounter = 1;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &num);
    
    for(int line = 0; line < num; line++)
    {
        for(int step = 0; step < newLineCounter; step++)
            printf("%d ", counter++);
        printf("\n");
        newLineCounter++;
    }
    
    getch();
}