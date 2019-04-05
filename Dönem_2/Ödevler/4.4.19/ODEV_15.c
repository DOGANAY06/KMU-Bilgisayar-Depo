#include <stdio.h>
#include <stdlib.h>

main()
{
    char input, *inputList, counter = 0;
    inputList = (char *) malloc(sizeof(char) * counter);

    printf("Cumleyi Giriniz: ");
    while(1)
    {
        scanf("%c", &input);
        if(input == '\n')
            break;
        inputList = realloc(inputList, sizeof(char) * ++counter);
        inputList[counter - 1] = input;
    }
    
    
    for(int i = 0; i < counter; i++)
        printf("\n%c", *(inputList + i));
    
    free(inputList);
    getch();
}