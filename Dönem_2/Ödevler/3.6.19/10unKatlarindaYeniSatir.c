#include <stdio.h>

main()
{
    int num;
    printf("Satir sayisini giriniz: ");
    scanf("%d", &num);
    
    for(int line = 0; line < num; line++)
    {
        for(int i = 1; i <= 10; i++)
            printf("%d ", line * 10 + i);
        printf("\n");
    }
    
    getch();
}