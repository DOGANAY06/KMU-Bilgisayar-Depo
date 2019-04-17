// #include <stdio.h>

// main()
// {
//     int sayi;
//     printf("Basamak sayisini giriniz: ");
//     scanf("%d", &sayi);
//     for(int i = 1; i <= sayi; i++)
//     {
//         for(int j = 1; j <= i; j++)
//             if(i == j)
//                 printf("*");
//             else
//                 printf(" ");
//         printf("\n");
//     }
// }

#include <stdio.h>

main()
{
    int sayi;
    printf("Basamak sayisini giriniz: ");
    scanf("%d", &sayi);
    for(int i = 1; i <= sayi; i++)
    {
        for(int j = 1; j <= i; j++)
            printf(" ");
        printf("*\n");
    }
}