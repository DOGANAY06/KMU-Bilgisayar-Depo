#include <stdio.h>

main()
{
    int num;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &num);

    int numArray[num];
    
    for(int i = 0; i < num; i++)
    {
        printf("%d. elemani giriniz: ", i + 1);
        scanf("%d", &numArray[i]);
    }

    printf("Dizi Elemanları\n");
    for(int i = 0; i < num; i++)
        printf("%d. Eleman = %d\n", i + 1, numArray[i]);
    
    getch();
}